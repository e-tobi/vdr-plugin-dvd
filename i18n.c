/*
 * DVD Player plugin for VDR
 *
 * Copyright (C) 2001.2002 Andreas Schultz <aschultz@warp10.net>
 *
 * This code is distributed under the terms and conditions of the
 * GNU GENERAL PUBLIC LICENSE. See the file COPYING for details.
 *
 */

#include "i18n.h"

const char *Languages[] = {
    "English",
    "Deutsch",
    "Slovenski",
    "Italiano",
    "Nederlands",
    "Portugu�s",
    "Fran�ais",
    "Norsk",
    "Suomi",
    "Polski",
    "Espa�ol",
    "Ellinika",
    "Svenska",
    "Romaneste",
    "Magyar",
    "Catal�",
#if VDRVERSNUM>=10300
    "�������", // Russian
#endif
#if VDRVERSNUM>=10307
    "Hrvatski",
#endif
};

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
    "",
#if VDRVERSNUM>=10300
    "ru",
#endif
#if VDRVERSNUM>=10307
    "",
#endif
};

const char *SpuOptions[] = {
	// options for the subtitles
	"no",
	"yes",
	"forced only",
};

const tI18nPhrase DvdPhrases[] = {
    {
    "Setup.DVD$Preferred menu language",                 // English
    "Bevorzugte Spache f�r Men�s",                      // Deutsch
        "", // Slovenski
        "menu - linguaggio preferito",                      // Italiano
        "Taalkeuze voor menu",                              // Nederlands
        "", // Portugu�s
        "Langage pr�f�r� pour les menus",                   // Fran�ais
        "", // Norsk
        "Haluttu valikon kieli",                // Suomi
        "", // Polski
        "Idioma preferido para los men�s",                  // Espa�ol
        "", // Ellinika
        "", // Svenska
        "", // Romaneste
        "",
        "",
#if VDRVERSNUM>=10300
        "", // Russian
#endif
#if VDRVERSNUM>=10307
        "",
#endif
    },
    {
    "Setup.DVD$Preferred audio language",                // English
        "Bevorzugte Sprache f�r Dialog",                    // Deutsch
        "", // Slovenski
        "audio - linguaggio preferito",                     // Italiano
        "Taalkeuze voor geluid",                            // Nederlands
        "", // Portugu�s
        "Langage pr�f�r� pour le son",                      // Fran�ais
        "", // Norsk
        "Haluttu ��nityksen kieli",             // Suomi
        "", // Polski
        "Idioma preferido para el sonido",                  // Espa�ol
        "", // Ellinika
        "", // Svenska
        "", // Romaneste
        "",
        "",
#if VDRVERSNUM>=10300
        "", // Russian
#endif
#if VDRVERSNUM>=10307
        "",
#endif
    },
    {
    "Setup.DVD$Preferred subtitle language",             // English
        "Bevorzugte Spache f�r Untertitel",                 // Deutsch
        "", // Slovenski
        "sottotitoli - linguaggio preferito",               // Italiano
        "Taalkeuze voor ondertitels",                       // Nederlands
        "", // Portugu�s
        "Langage pr�f�r� pour les sous-titres",             // Fran�ais
        "", // Norsk
        "Haluttu tekstityksen kieli",               // Suomi
        "", // Polski
        "Idioma preferido para los subt�tulos",             // Espa�ol
        "", // Ellinika
        "", // Svenska
        "", // Romaneste
        "",
        "",
#if VDRVERSNUM>=10300
        "", // Russian
#endif
#if VDRVERSNUM>=10307
        "",
#endif
    },
    {
    "Setup.DVD$Player region code",                     // English
        "Regions Kode f�r Player",                          // Deutsch
        "", // Slovenski
        "region code del DVD player",                       // Italiano
        "Regiocode van Speler",                             // Nederlands
        "", // Portugu�s
        "Code r�gion du lecteur",                           // Fran�ais
        "", // Norsk
        "Soittimen aluekoodi",                      // Suomi
        "", // Polski
        "C�digo de zona del lector",                        // Espa�ol
        "", // Ellinika
        "", // Svenska
        "", // Romaneste
        "",
        "",
#if VDRVERSNUM>=10300
        "", // Russian
#endif
#if VDRVERSNUM>=10307
        "",
#endif
    },
    {
    "Setup.DVD$Display subtitles",                      // English
        "Untertitel anzeigen",                              // Deutsch
        "", // Slovenski
        "Visualizza sottotitoli",                           // Italiano
        "Toon ondertitels",                                 // Nederlands
        "", // Portugu�s
        "Affiche les sous-titres",                          // Fran�ais
        "", // Norsk
        "N�yt� tekstitys",                  // Suomi
        "", // Polski
        "Mostrar subt�tulos",                               // Espa�ol
        "", // Ellinika
        "", // Svenska
        "", // Romaneste
        "",
        "",
#if VDRVERSNUM>=10300
        "", // Russian
#endif
#if VDRVERSNUM>=10307
        "",
#endif
    },
    {
    "Setup.DVD$Hide Mainmenu Entry",
    },
    { NULL }
};

