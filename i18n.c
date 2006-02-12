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
    "hr",
    "et",
    "da",
#if VDRVERSNUM >= 10342
    "cs",
#endif
};

const tI18nPhrase DvdPhrases[] = {
    {
    "Plugin.DVD$DVD",                                       // English
        "DVD",                                              // Deutsch
        "DVD",                                              // Slovenski
        "DVD",                                              // Italiano
        "DVD",                                              // Nederlands
        "DVD",                                              // Portugu�s
        "DVD",                                              // Fran�ais
        "DVD",                                              // Norsk
        "DVD",                                              // suomi
        "DVD",                                              // Polski
        "DVD",                                              // Espa�ol
        "DVD",                                              // �������� (Greek)
        "DVD",                                              // Svenska
        "DVD",                                              // Romaneste
        "DVD",                                              // Magyar
        "DVD",                                              // Catal�
        "������������� DVD",                                // ������� (Russian)
        "DVD",                                              // Hrvatski (Croatian)
        "DVD",                                              // Eesti
        "DVD",                                              // Dansk
#if VDRVERSNUM >= 10342
        "DVD",                                              // Czech
#endif
    },
    {
    "Plugin.DVD$turn VDR into an (almost) full featured DVD player",    // English
        "verwandelt VDR in einen (fast) vollst�ndigen DVD Spieler",     // Deutsch
        "",                                                             // Slovenski
        "",                                                             // Italiano
        "",                                                             // Nederlands
        "",                                                             // Portugu�s
        "",                                                             // Fran�ais
        "",                                                             // Norsk
        "DVD-soitin",                                                   // suomi
        "Zmienia VDR w odtwarzacz DVD",                                 // Polski
        "Convierte VDR en un reproductor DVD (casi) completo",          // Espa�ol
        "",                                                             // �������� (Greek)
        "",                                                             // Svenska
        "",                                                             // Romaneste
        "",                                                             // Magyar
        "",                                                             // Catal�
        "������������� DVD",                                            // ������� (Russian)
        "",                                                             // Hrvatski (Croatian)
        "",                                                             // Eesti
        "forvandler VDR til en (n�sten) normal DVD afspiller",          // Dansk
#if VDRVERSNUM >= 10342
        "",                                                             // Czech
#endif
    },
    {
    "Setup.DVD$Preferred menu language",                    // English
        "Bevorzugte Spache f�r Men�s",                      // Deutsch
        "",                                                 // Slovenski
        "menu - linguaggio preferito",                      // Italiano
        "Taalkeuze voor menu",                              // Nederlands
        "",                                                 // Portugu�s
        "Langage pr�f�r� pour les menus",                   // Fran�ais
        "",                                                 // Norsk
        "Haluttu valikkokieli",                             // suomi
        "Preferowany j�zyk menu",                           // Polski
        "Idioma preferido para los men�s",                  // Espa�ol
        "",                                                 // �������� (Greek)
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "�������������� ���� ����",                         // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
        "",                                                 // Eesti
        "Foretrukket sprog for menuer",                     // Dansk
#if VDRVERSNUM >= 10342
        "",                                                 // Czech
#endif
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
        "Haluttu ��niraita",                                // suomi
        "Preferowany j�zyk d�wi�ku",                        // Polski
        "Idioma preferido para el sonido",                  // Espa�ol
        "",                                                 // �������� (Greek)
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "�������������� ���� �����",                        // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
        "",                                                 // Eesti
        "Foretrukket sprog for lyd",                        // Dansk
#if VDRVERSNUM >= 10342
        "",                                                 // Czech
#endif
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
        "Haluttu tekstityskieli",                           // suomi
        "Preferowany j�zyk napis�w",                        // Polski
        "Idioma preferido para los subt�tulos",             // Espa�ol
        "",                                                 // �������� (Greek)
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "�������������� ���� ���������",                    // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
        "",                                                 // Eesti
        "Foretrukket sprog for undertekster",               // Dansk
#if VDRVERSNUM >= 10342
        "",                                                 // Czech
#endif
    },
    {
    "Setup.DVD$Player region code",                         // English
        "Regionalkode f�r DVD Spieler",                     // Deutsch
        "",                                                 // Slovenski
        "region code del DVD player",                       // Italiano
        "Regiocode van Speler",                             // Nederlands
        "",                                                 // Portugu�s
        "Code r�gion du lecteur",                           // Fran�ais
        "",                                                 // Norsk
        "Soittimen aluekoodi",                              // suomi
        "Kod regionu odtwarzacza",                          // Polski
        "C�digo de zona del lector",                        // Espa�ol
        "",                                                 // �������� (Greek)
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "��� ����",                                         // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
        "",                                                 // Eesti
        "Afspillerens regions kode",                        // Dansk
#if VDRVERSNUM >= 10342
        "",                                                 // Czech
#endif
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
        "N�yt� tekstitys",                                  // suomi
        "Wy�wietlaj napisy",                                // Polski
        "Mostrar subt�tulos",                               // Espa�ol
        "",                                                 // �������� (Greek)
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "���������� ��������",                              // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
        "",                                                 // Eesti
        "Vis undertekster",                                 // Dansk
#if VDRVERSNUM >= 10342
        "",                                                 // Czech
#endif
    },
    {
     "Setup.DVD$Hide Mainmenu Entry",
        "Hauptmen�eintrag verstecken",                      // Deutsch
        "",                                                 // Slovenski
        "Nascondi voce men�",                               // Italiano
        "",                                                 // Nederlands
        "",                                                 // Portugu�s
        "",                                                 // Fran�ais
        "",                                                 // Norsk
        "Piilota valinta p��valikosta",                     // suomi
        "Ukryj pozycj� w g��wnym menu",                     // Polski
        "Ocultar entrada en el men� principal",             // Espa�ol
        "",                                                 // �������� (Greek)
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "������ ������� � ������� ����",                    // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
        "",                                                 // Eesti
        "Skjul DVD i hovedmenuen",                          // Dansk
#if VDRVERSNUM >= 10342
        "",                                                 // Czech
#endif
    },
    {
     "Setup.DVD$ReadAHead",
        "ReadAHead",                                        // Deutsch
        "ReadAHead",                                        // Slovenski
        "ReadAHead",                                        // Italiano
        "ReadAHead",                                        // Nederlands
        "ReadAHead",                                        // Portugu�s
        "ReadAHead",                                        // Fran�ais
        "ReadAHead",                                        // Norsk
        "ReadAHead-toiminto",                               // suomi
        "ReadAHead",                                        // Polski
        "Lectura anticipada",                               // Espa�ol
        "ReadAHead",                                        // �������� (Greek)
        "ReadAHead",                                        // Svenska
        "ReadAHead",                                        // Romaneste
        "ReadAHead",                                        // Magyar
        "ReadAHead",                                        // Catal�
        "����������� ������",                               // ������� (Russian)
        "ReadAHead",                                        // Hrvatski (Croatian)
        "ReadAHead",                                        // Eesti
        "L�s forud",                                        // Dansk
#if VDRVERSNUM >= 10342
        "ReadAHead",                                        // Czech
#endif
    },
    {
     "Setup.DVD$Gain (analog)",
     "Verst�rkung (analog)",                                // Deutsch
     "Gain (analog)",                                       // Slovenski
     "Gain (analog)",                                       // Italiano
     "Gain (analog)",                                       // Nederlands
     "Gain (analog)",                                       // Portugu�s
     "Gain (analog)",                                       // Fran�ais
     "Gain (analog)",                                       // Norsk
     "��nen vahvistus (analoginen)",                        // suomi
     "Zysk (analogowo)",                                    // Polski
     "Ganancia (anal�gico)",                                // Espa�ol
     "Gain (analog)",                                       // �������� (Greek)
     "Gain (analog)",                                       // Svenska
     "Gain (analog)",                                       // Romaneste
     "Gain (analog)",                                       // Magyar
     "Gain (analog)",                                       // Catal�
     "�������� (������.)",                                  // ������� (Russian)
     "Gain (analog)",                                       // Hrvatski (Croatian)
     "Gain (analog)",                                       // Eesti
     "Forst�rkning (analog)",                               // Dansk
#if VDRVERSNUM >= 10342
     "Gain (analog)",                                       // Czech
#endif
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
        "DVD:n avaaminen ep�onnistui!",                     // suomi
        "B��d otwierania DVD!",                             // Polski
        "�Error abriendo el DVD!",                          // Espa�ol
        "",                                                 // �������� (Greek)
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "������ �������� DVD!",                             // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
        "",                                                 // Eesti
        "Fejl ved �bning af DVD!",                          // Dansk
#if VDRVERSNUM >= 10342
        "",                                                 // Czech
#endif
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
        "DVD:n lukeminen ep�onnistui",                      // suomi
        "B��d pobierania danych z DVD!",                    // Polski
        "�Error obteniendo datos del DVD!",                 // Espa�ol
        "",                                                 // �������� (Greek)
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "������ ������ DVD!",                               // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
        "",                                                 // Eesti
        "Fejl ved hentning af data fra DVD!",               // Dansk
#if VDRVERSNUM >= 10342
        "",                                                 // Czech
#endif
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
        "Tekstitysraitaa ei havaita!",                      // suomi
        "Wybrane napisy nie istniej�!",                     // Polski
        "�Subt�tulos actuales no encontrados!",             // Espa�ol
        "",                                                 // �������� (Greek)
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "���������� ���������� �������� �������!",          // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
        "",                                                 // Eesti
        "Valgte undertekst findes ikke!",                   // Dansk
#if VDRVERSNUM >= 10342
        "",                                                 // Czech
#endif
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
        "��niraitaa ei havaita!",                           // suomi
        "Wybrana �cie�ka d�wi�kowa nie istnieje!",          // Polski
        "�Pista de audio actual no encontrada!",            // Espa�ol
        "",                                                 // �������� (Greek)
        "",                                                 // Svenska
        "",                                                 // Romaneste
        "",                                                 // Magyar
        "",                                                 // Catal�
        "���������� ������� ����������!",                   // ������� (Russian)
        "",                                                 // Hrvatski (Croatian)
        "",                                                 // Eesti
        "Valgte lyd-spor findes ikke!",                     // Dansk
#if VDRVERSNUM >= 10342
        "",                                                 // Czech
#endif
    },
    { NULL }
};
