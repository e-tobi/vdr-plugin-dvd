/*
 * DVD Player plugin for VDR
 *
 * Copyright (C) 2001.2002 Andreas Schultz <aschultz@warp10.net>
 *
 * This code is distributed under the terms and conditions of the
 * GNU GENERAL PUBLIC LICENSE. See the file COPYING for details.
 *
 */

#ifdef HAVE_CONFIG_H 
#include "config.h"
#endif

#include "i18n.h"

const char *ISO639code[] = {
  // Language ISO 639 codes for DVD
    "en",
    "de",
    "sl",
    "it",
    "nl",
    "pt",
    "fr",
    "no",
    "fi",
    "pl",
    "es",
    "el",
    "se",
    "ro",
    "hu",
    "ca",
    "ru",
    "",
};

const tI18nPhrase DvdPhrases[] = {
    {
    "Setup.DVD$Preferred menu language",                    // English
    "Bevorzugte Spache f�r Men�s",                          // Deutsch
        "",                                                 // Slovenski
        "menu - linguaggio preferito",                      // Italiano
        "Taalkeuze voor menu",                              // Nederlands
        "",                                                 // Portugu�s
        "Langage pr�f�r� pour les menus",                   // Fran�ais
        "",                                                 // Norsk
        "Haluttu valikon kieli",                            // Suomi
        "",                                                 // Polski
        "Idioma preferido para los men�s",                  // Espa�ol
        "",                                                 // Ellinika
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "",                                                 // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
    },
    {
    "Setup.DVD$Preferred audio language",                   // English
        "Bevorzugte Sprache f�r Dialog",                    // Deutsch
        "",                                                 // Slovenski
        "audio - linguaggio preferito",                     // Italiano
        "Taalkeuze voor geluid",                            // Nederlands
        "",                                                 // Portugu�s
        "Langage pr�f�r� pour le son",                      // Fran�ais
        "",                                                 // Norsk
        "Haluttu ��nityksen kieli",                         // Suomi
        "",                                                 // Polski
        "Idioma preferido para el sonido",                  // Espa�ol
        "",                                                 // Ellinika
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "",                                                 // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
    },
    {
    "Setup.DVD$Preferred subtitle language",                // English
        "Bevorzugte Spache f�r Untertitel",                 // Deutsch
        "",                                                 // Slovenski
        "sottotitoli - linguaggio preferito",               // Italiano
        "Taalkeuze voor ondertitels",                       // Nederlands
        "",                                                 // Portugu�s
        "Langage pr�f�r� pour les sous-titres",             // Fran�ais
        "",                                                 // Norsk
        "Haluttu tekstityksen kieli",                       // Suomi
        "",                                                 // Polski
        "Idioma preferido para los subt�tulos",             // Espa�ol
        "",                                                 // Ellinika
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "",                                                 // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
    },
    {
    "Setup.DVD$Player region code",                         // English
        "Regions Kode f�r Player",                          // Deutsch
        "",                                                 // Slovenski
        "region code del DVD player",                       // Italiano
        "Regiocode van Speler",                             // Nederlands
        "",                                                 // Portugu�s
        "Code r�gion du lecteur",                           // Fran�ais
        "",                                                 // Norsk
        "Soittimen aluekoodi",                              // Suomi
        "",                                                 // Polski
        "C�digo de zona del lector",                        // Espa�ol
        "",                                                 // Ellinika
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "",                                                 // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
    },
    {
    "Setup.DVD$Display subtitles",                          // English
        "Untertitel anzeigen",                              // Deutsch
        "",                                                 // Slovenski
        "Visualizza sottotitoli",                           // Italiano
        "Toon ondertitels",                                 // Nederlands
        "",                                                 // Portugu�s
        "Affiche les sous-titres",                          // Fran�ais
        "",                                                 // Norsk
        "N�yt� tekstitys",                                  // Suomi
        "",                                                 // Polski
        "Mostrar subt�tulos",                               // Espa�ol
        "",                                                 // Ellinika
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "",                                                 // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
    },
    {
     "Setup.DVD$Hide Mainmenu Entry",
        "Hauptmen�eintrag verstecken"                       // Deutsch
        "",                                                 // Slovenski
        "Nascondi voce men�",                               // Italiano
        "",                                                 // Nederlands
        "",                                                 // Portugu�s
        "",                                                 // Fran�ais
        "",                                                 // Norsk
        "Piilota valinta p��valikosta",                     // Suomi
        "",                                                 // Polski
        "",                                                 // Espa�ol
        "",                                                 // Ellinika
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "������ ������� � ������� ����",                    // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
    },
    {
    "Error.DVD$Error opening DVD!",                         // English
        "Fehler beim �ffnen der DVD!",                      // Deutsch
        "",                                                 // Slovenski
        "",                                                 // Italiano
        "",                                                 // Nederlands
        "",                                                 // Portugu�s
        "",                                                 // Fran�ais
        "",                                                 // Norsk
        "",                                                 // Suomi
        "",                                                 // Polski
        "",                                                 // Espa�ol
        "",                                                 // Ellinika
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "",                                                 // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
    },
    {
    "Error.DVD$Error fetching data from DVD!",              // English
        "Fehler beim lesen von der DVD!",                   // Deutsch
        "",                                                 // Slovenski
        "",                                                 // Italiano
        "",                                                 // Nederlands
        "",                                                 // Portugu�s
        "",                                                 // Fran�ais
        "",                                                 // Norsk
        "",                                                 // Suomi
        "",                                                 // Polski
        "",                                                 // Espa�ol
        "",                                                 // Ellinika
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "",                                                 // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
    },
    {
    "Error.DVD$Current subp stream not seen!",              // English
        "Der ausgew�hlte Untertitel ist nicht vorhanden!",  // Deutsch
        "",                                                 // Slovenski
        "",                                                 // Italiano
        "",                                                 // Nederlands
        "",                                                 // Portugu�s
        "",                                                 // Fran�ais
        "",                                                 // Norsk
        "",                                                 // Suomi
        "",                                                 // Polski
        "",                                                 // Espa�ol
        "",                                                 // Ellinika
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "",                                                 // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
    },
    {
    "Error.DVD$Current audio track not seen!",              // English
        "Die ausgew�hlte Audiospur ist nicht vorhanden!",   // Deutsch
        "",                                                 // Slovenski
        "",                                                 // Italiano
        "",                                                 // Nederlands
        "",                                                 // Portugu�s
        "",                                                 // Fran�ais
        "",                                                 // Norsk
        "",                                                 // Suomi
        "",                                                 // Polski
        "",                                                 // Espa�ol
        "",                                                 // Ellinika
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "",                                                 // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
    },
    { NULL }
};
