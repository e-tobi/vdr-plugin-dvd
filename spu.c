/*
 * DVD Player plugin for VDR
 *
 * Copyright (C) 2001.2002 Andreas Schultz <aschultz@warp10.net>
 *
 * This code is distributed under the terms and conditions of the
 * GNU GENERAL PUBLIC LICENSE. See the file COPYING for details.
 *
 * parts of this file are derived from the OMS program.
 *
 */

/*****
*
* This file is part of the VDR program.
* This file was part of the OMS program.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2, or (at your option)
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; see the file COPYING.  If not, write to
* the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
*
*****/

//#define DEBUG

/*
 * subpic_decode.c - converts DVD subtitles to an XPM image
 *
 * Mostly based on hard work by:
 *
 * Copyright (C) 2000   Samuel Hocevar <sam@via.ecp.fr>
 *                       and Michel Lespinasse <walken@via.ecp.fr>
 *
 * Lots of rearranging by:
 *	Aaron Holtzman <aholtzma@ess.engr.uvic.ca>
 *	Thomas Mirlacher <dent@cosy.sbg.ac.at>
 *		implemented reassembling
 *		cleaner implementation of SPU are saving
 *		overlaying (proof of concept for now)
 *		... and yes, it works now with oms
 *		added tranparency (provided by the SPU hdr)
 *		changed structures for easy porting to MGAs DVD mode
 *
 * addapted for VDR by Andreas Schultz
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

 /*
 * added some functions to extract some informations of the SPU command
 * sequence (cSPUassembler::checkSPUHeader and related).
 * needed for 'forced subtitles only' mode
 *
 * weak@pimps.at
 *
 * Code of checkSPUHeader and related functions are based on SPUClass.cpp from the NMM - Network-Integrated Multimedia Environment (www.networkmultimedia.org)
 *
 */

#include <assert.h>

#include <inttypes.h>
#include <malloc.h>
#include <string.h>

#include "spu.h"


//----------- cSPUdata -----------------------------------

simpleFIFO::simpleFIFO(int Size)
{
    size = Size;
    head = tail = 0;
    buffer = (uint8_t *)malloc(2*size);
}

simpleFIFO::~simpleFIFO()
{
    free(buffer);
}

int simpleFIFO::Put(const uint8_t *Data, int Count)
{
  if (Count > 0) {
     int rest = size - head;
     int free = Free();

     if (free <= 0)
        return 0;
     if (free < Count)
        Count = free;
     if (Count >= rest) {
        memcpy(buffer + head, Data, rest);
        if (Count - rest)
           memcpy(buffer, Data + rest, Count - rest);
        head = Count - rest;
        }
     else {
        memcpy(buffer + head, Data, Count);
        head += Count;
        }
     }
  return Count;
}

int simpleFIFO::Get(uint8_t *Data, int Count)
{
  if (Count > 0) {
     int rest = size - tail;
     int cont = Available();

     if (rest <= 0)
        return 0;
     if (cont < Count)
        Count = cont;
     if (Count >= rest) {
	 memcpy(Data, buffer + tail, rest);
	 if (Count - rest)
	     memcpy(Data + rest, buffer, Count - rest);
	 tail = Count - rest;
     } else {
	 memcpy(Data, buffer + tail, Count);
	 tail += Count;
     }
  }
  return Count;
}

int simpleFIFO::Release(int Count)
{
  if (Count > 0) {
     int rest = size - tail;
     int cont = Available();

     if (rest <= 0)
        return 0;
     if (cont < Count)
        Count = cont;
     if (Count >= rest)
	tail = Count - rest;
     else
	tail += Count;
  }
  return Count;
}

// ---------- cSPUassembler -----------------------------------

cSPUassembler::cSPUassembler(): simpleFIFO(SPU_BUFFER_SIZE) { };

int cSPUassembler::Put(const uint8_t *Data, int Count, uint32_t Pts)
{
    if (Pts > 0)
	pts = Pts;
    return simpleFIFO::Put(Data, Count);
}

unsigned int cSPUassembler::getNextBytes( unsigned int num ) {
   unsigned int result = 0;

   if( num>4 ) {
     //cout << "getBytes used with more than 4 bytes" << endl;
     return( result );
   }

   while( num > 0 ) {
     result <<= 8;
     result |= *byte_pos;
     //byte_pos++;
     byte_pos++;
     num--;
   }

   return( result );
}

void cSPUassembler::setByte( unsigned char* byte ) {
   byte_pos = byte;
}

int cSPUassembler::getSPUCommand( unsigned char* packet, unsigned int size ) {
   unsigned char command;
   int helperBytes = 0;
   
   //increase data received
   spu_dataReceived += size;
   
   //command allready found, packet contains only data
   if( spu_packetOverhead ) {
      spu_packetOverhead = false;
      spu_dataReceived = 0;
      return 3;
   }
   
   // set data pointer to begin of the packet
   setByte( packet );
   
   //no spanning data or command at 1st byte?
   if( spu_offset == 0 && !spu_commandOverhead ) {
      //get size
      spu_size = getNextBytes(2);
      spu_dataReceived = size;
      
      // get offset to the Control Sequence
   	spu_offset = getNextBytes(2);
   	
   	// subtract 4 bytes from size to make the checks work
   	size = size - 4;
   	
   	//we need 4 bytes we've lost
   	helperBytes += 4;
   }
   
   //offset not within packet?
   if( spu_offset > size ) {
      spu_offset -= size;
      return 3;
   }
        
   //offset matches packetsize
   if( spu_offset == size ) {
      spu_commandOverhead = true;
      spu_offset = 0;
      return 3;
   }
      
   //offset within packet but another packet to receive?
   if( spu_offset < size && spu_dataReceived < spu_size )
      spu_packetOverhead = true;   
   
   //goto offset
   setByte( packet + spu_offset + helperBytes );
         
   //get byte
   command = getNextBytes(1);   
   
   //check byte
   switch( command ) {
       case 0x00: // forced play
         spu_offset = 0;
         spu_commandOverhead = false;
         return 0;
       break;

       case 0x01: // display start
         spu_offset = 0;
         spu_commandOverhead = false;
         return 1;
       break;

       case 0x02: // display stop
         spu_offset = 0;
         spu_commandOverhead = false;
         return 2;
       break;
       
       default:
         spu_offset = 0;
         spu_commandOverhead = false;
         return 4;
       break;
   }//switch
}