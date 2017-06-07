/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Polish
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_PL_H
#define LANGUAGE_PL_H

#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME " gotowy."
#define MSG_SD_INSERTED                     "Karta wlozona"
#define MSG_SD_REMOVED                      "Karta usunieta"
#define MSG_LCD_ENDSTOPS                    "Krancow." // Max length 8 characters
#define MSG_MAIN                            "Menu glowne"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Wylacz silniki"
#define MSG_AUTO_HOME                       "Pozycja zerowa"
#define MSG_AUTO_HOME_X                     "Home X"
#define MSG_AUTO_HOME_Y                     "Home Y"
#define MSG_AUTO_HOME_Z                     "Home Z"
#define MSG_LEVEL_BED_HOMING                "Pozycja zerowa"
#define MSG_LEVEL_BED_WAITING               "Kliknij by rozp."
#define MSG_LEVEL_BED_NEXT_POINT            "Nastepny punkt"
#define MSG_LEVEL_BED_DONE                  "Wypoziomowano!"
#define MSG_LEVEL_BED_CANCEL                "Anuluj"
#define MSG_SET_HOME_OFFSETS                "Ust. poz. zer."
#define MSG_HOME_OFFSETS_APPLIED            "Poz. zerowa ust."
#define MSG_SET_ORIGIN                      "Ustaw punkt zero"
#define MSG_PREHEAT_1                       "Rozgrzej PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " All"
#define MSG_PREHEAT_1_BEDONLY               "Rozgrzej stol PLA"
#define MSG_PREHEAT_1_SETTINGS              "Ustaw. rozg. PLA"
#define MSG_PREHEAT_2                       "Rozgrzej ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " All"
#define MSG_PREHEAT_2_BEDONLY               "Rozgrzej stol ABS"
#define MSG_PREHEAT_2_SETTINGS              "Ustaw. rozg. ABS"
#define MSG_COOLDOWN                        "Chlodzenie"
#define MSG_SWITCH_PS_ON                    "Wlacz zasilacz"
#define MSG_SWITCH_PS_OFF                   "Wylacz zasilacz"
#define MSG_EXTRUDE                         "Ekstruzja"
#define MSG_RETRACT                         "Wycofanie"
#define MSG_MOVE_AXIS                       "Ruch osi"
#define MSG_LEVEL_BED                       "Poziom. stolu"
#define MSG_MOVE_X                          "Przesun w X"
#define MSG_MOVE_Y                          "Przesun w Y"
#define MSG_MOVE_Z                          "Przesun w Z"
#define MSG_MOVE_E                          "Ekstruzja (os E)"
#define MSG_MOVE_01MM                       "Przesun co .1mm"
#define MSG_MOVE_1MM                        "Przesun co 1mm"
#define MSG_MOVE_10MM                       "Przesun co 10mm"
#define MSG_SPEED                           "Predkosc"
#define MSG_BED_Z                           "Stol Z"
#define MSG_NOZZLE                          "Dysza"
#define MSG_BED                             "Stol"
#define MSG_FAN_SPEED                       "Obroty wiatraka"
#define MSG_FLOW                            "Przeplyw"
#define MSG_CONTROL                         "Ustawienia"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Mnoznik"
#define MSG_AUTOTEMP                        "Auto. temperatura"
#define MSG_ON                              "Wl. "
#define MSG_OFF                             "Wyl."
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Select"
#define MSG_ACC                             "Przyspieszenie"
#define MSG_VX_JERK                         "Zryw Vx"
#define MSG_VY_JERK                         "Zryw Vy"
#define MSG_VZ_JERK                         "Zryw Vz"
#define MSG_VE_JERK                         "Zryw Ve"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "Vskok min"
#define MSG_AMAX                            "Amax"
#define MSG_A_RETRACT                       "A-wycofanie"
#define MSG_A_TRAVEL                        "A-przesun."
#define MSG_XSTEPS                          "krokiX/mm"
#define MSG_YSTEPS                          "krokiY/mm"
#define MSG_ZSTEPS                          "krokiZ/mm"
#define MSG_ESTEPS                          "krokiE/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Ruch"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E w mm3"
#define MSG_FILAMENT_DIAM                   "Śr. fil."
#define MSG_CONTRAST                        "Kontrast LCD"
#define MSG_STORE_EPROM                     "Zapisz w pamieci"
#define MSG_LOAD_EPROM                      "Wczytaj z pamieci"
#define MSG_RESTORE_FAILSAFE                "Ustaw. fabryczne"
#define MSG_REFRESH                         "Odswiez"
#define MSG_WATCH                           "Ekran glowny"
#define MSG_PREPARE                         "Przygotuj"
#define MSG_TUNE                            "Strojenie"
#define MSG_PAUSE_PRINT                     "Pauza"
#define MSG_RESUME_PRINT                    "Wznowienie"
#define MSG_STOP_PRINT                      "Stop"
#define MSG_CARD_MENU                       "Menu karty SD"
#define MSG_NO_CARD                         "Brak karty"
#define MSG_DWELL                           "Uspij..."
#define MSG_USERWAIT                        "Oczekiwanie..."
#define MSG_RESUMING                        "Wznawianie druku"
#define MSG_PRINT_ABORTED                   "Druk przerwany"
#define MSG_NO_MOVE                         "Brak ruchu"
#define MSG_KILLED                          "Ubity. "
#define MSG_STOPPED                         "Zatrzymany. "
#define MSG_CONTROL_RETRACT                 "Wycofaj mm"
#define MSG_CONTROL_RETRACT_SWAP            "Z Wycof. mm"
#define MSG_CONTROL_RETRACTF                "Wycofaj  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Skok Z mm"
#define MSG_CONTROL_RETRACT_RECOVER         "Cof. wycof. +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Z Cof. wyc. +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "Cof. wycof.  V"
#define MSG_AUTORETRACT                     "Auto. wycofanie"
#define MSG_FILAMENTCHANGE                  "Zmien filament"
#define MSG_INIT_SDCARD                     "Inicjal. karty SD"
#define MSG_CNG_SDCARD                      "Zmiana karty SD"
#define MSG_ZPROBE_OUT                      "Sonda Z za stolem"
#define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   "Reset BLTouch"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "first"
#define MSG_ZPROBE_ZOFFSET                  "Offset Z"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Blad krancowki"
#define MSG_HEATING_FAILED_LCD              "Rozgrz. nieudane"
#define MSG_ERR_REDUNDANT_TEMP              "Blad temperatury"
#define MSG_THERMAL_RUNAWAY                 "Zanik temp."
#define MSG_ERR_MAXTEMP                     "Err: max. temp."
#define MSG_ERR_MINTEMP                     "Err: min. temp."
#define MSG_ERR_MAXTEMP_BED                 "Err: max. temp. loza"
#define MSG_ERR_MINTEMP_BED                 "Err: min. temp. loza"
#define MSG_ERR_Z_HOMING                    "G28 Z Forbidden"
#define MSG_HALTED                          "PRINTER HALTED"
#define MSG_PLEASE_RESET                    "Please reset"
#define MSG_SHORT_DAY                       "d" // One character only
#define MSG_SHORT_HOUR                      "h" // One character only
#define MSG_SHORT_MINUTE                    "m" // One character only
#define MSG_HEATING                         "Rozgrzewanie..."
#define MSG_HEATING_COMPLETE                "Rozgrzano"
#define MSG_BED_HEATING                     "Rozgrzewanie stolu..."
#define MSG_BED_DONE                        "Rozgrzano stol"
#define MSG_DELTA_CALIBRATE                 "Kalibrowanie Delty"
#define MSG_DELTA_CALIBRATE_X               "Kalibruj X"
#define MSG_DELTA_CALIBRATE_Y               "Kalibruj Y"
#define MSG_DELTA_CALIBRATE_Z               "Kalibruj Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Kalibruj środek"

#define MSG_INFO_MENU                       "About Printer"
#define MSG_INFO_PRINTER_MENU               "Printer Info"
#define MSG_INFO_STATS_MENU                 "Printer Stats"
#define MSG_INFO_BOARD_MENU                 "Board Info"
#define MSG_INFO_THERMISTOR_MENU            "Thermistors"
#define MSG_INFO_EXTRUDERS                  "Extruders"
#define MSG_INFO_BAUDRATE                   "Baud"
#define MSG_INFO_PROTOCOL                   "Protocol"
#define MSG_LIGHTS_ON                       "Case light on"
#define MSG_LIGHTS_OFF                      "Case light off"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Print Count"
  #define MSG_INFO_COMPLETED_PRINTS         "Completed"
  #define MSG_INFO_PRINT_TIME               "Total print time"
  #define MSG_INFO_PRINT_LONGEST            "Longest job time"
  #define MSG_INFO_PRINT_FILAMENT           "Extruded total"
#else
  #define MSG_INFO_PRINT_COUNT              "Prints"
  #define MSG_INFO_COMPLETED_PRINTS         "Completed"
  #define MSG_INFO_PRINT_TIME               "Total"
  #define MSG_INFO_PRINT_LONGEST            "Longest"
  #define MSG_INFO_PRINT_FILAMENT           "Extruded"
#endif

#define MSG_INFO_MIN_TEMP                   "Min Temp"
#define MSG_INFO_MAX_TEMP                   "Max Temp"
#define MSG_INFO_PSU                        "Power Supply"

#define MSG_DRIVE_STRENGTH                  "Drive Strength"
#define MSG_DAC_PERCENT                     "Driver %"
#define MSG_DAC_EEPROM_WRITE                "DAC EEPROM Write"
#define MSG_FILAMENT_CHANGE_HEADER          "CHANGE FILAMENT"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "CHANGE OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Resume print"
#if LCD_HEIGHT >= 4
  #define MSG_FILAMENT_CHANGE_INIT_1          "Wait for start"
  #define MSG_FILAMENT_CHANGE_INIT_2          "of the filament"
  #define MSG_FILAMENT_CHANGE_INIT_3          "change"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Wait for"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filament unload"
  #define MSG_FILAMENT_CHANGE_UNLOAD_3        ""
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "and press button"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "to continue..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Wait for"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "filament load"
  #define MSG_FILAMENT_CHANGE_LOAD_3          ""
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Wait for"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "filament extrude"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3       ""
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Wait for print"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "to resume"
  #define MSG_FILAMENT_CHANGE_RESUME_3        ""
#else // LCD_HEIGHT < 4
  #define MSG_FILAMENT_CHANGE_INIT_1          "Please wait..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Ejecting..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert and Click"
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Loading..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Extruding..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Resuming..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_PL_H
