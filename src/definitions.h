/*
*  definitions.h
*
*  PoroQueue Definition Header
*
*/

#ifndef _PORO_QUEUE_DEFS
#define _PORO_QUEUE_DEFS

/* Definitions */
//Tool
#define NAME "PoroQueue"
#define VERSION "2.00"

//Logging
#define HEADER_PREFIX 0
#define NORMAL_PREFIX 1
#define LOG_FOLDER "LOG FILES"

#define SETTINGS_FILE "settings.ini"
#define DONATE_URL "http://www.hackavistic.com/goto.php?t=donate&src=onesautoqueue"

//Client
#define LOL_VER_REGEX "\\d\\.\\d\\.\\d\\.\\d\\d$"
#define TIP_PREFIX "PoroQueue v" VERSION "\nSTATUS: "
#define CLIENT_WIDTH 1024
#define CLIENT_HEIGHT 640
#define MATCH_FAILED 0

//Curwindow
#define NO_WINDOW 0
#define CLIENT_WINDOW 1
#define GAME_WINDOW 2

//Erorr Codes
#define ERR_RUNNING 1 //Program is already running.
#define ERR_CONF_MISSING 2 //Configuration file is missing.
#define ERR_CONF_INVALID 3 //Configuration file has invalid settings.
#define ERR_IMG_MISSING 4 //Required Image Missing
#define ERR_CLASS_REG_FAILED 5 //Class Registration Failed.
#define ERR_WINDOW_CREATION_FAILED 6 //Window Creation Failed.
#define ERR_IMAGE_CAPTURE_FAILED 7 //failed to capture image
#define ERR_CREATE_LOG_FILE 8 //failed to create log file or folder

//Ini Settings Definitions
#define CLIENT_TYPE_NORMAL 1
#define CLIENT_TYPE_GARENA 2

//Tray Icon Variables
#define ID_TRAY_APP_ICON                10000
#define ID_TRAY_EXIT_CONTEXT_MENU_ITEM  5001
#define ID_TRAY_TOGGLE_PAUSE  5002
#define ID_TRAY_RESET_CYCLE 5003
#define ID_TRAY_FINISH_LAST_CYCLE 5004
#define ID_TRAY_DONATE 5005

#define ID_TRAY_CHANGE_TO_0 6000
#define ID_TRAY_CHANGE_TO_1 6001
#define ID_TRAY_CHANGE_TO_2 6002
#define ID_TRAY_CHANGE_TO_3 6003
#define ID_TRAY_CHANGE_TO_4 6004
#define ID_TRAY_CHANGE_TO_5 6005
#define ID_TRAY_CHANGE_TO_6 6006
#define ID_TRAY_CHANGE_TO_7 6007
#define ID_TRAY_CHANGE_TO_8 6008
#define ID_TRAY_CHANGE_TO_9 6009
#define ID_TRAY_CHANGE_TO_10 6010
#define ID_TRAY_CHANGE_TO_11 6011
#define ID_TRAY_CHANGE_TO_12 6012
#define ID_TRAY_CHANGE_TO_13 6013
#define ID_TRAY_CHANGE_TO_14 6014
#define ID_TRAY_CHANGE_TO_15 6015
#define ID_TRAY_CHANGE_TO_16 6016

//Modes
#define TYPE_COOP 1
#define TYPE_NORMAL 2
#define TYPE_ARAM 3

//Difficulty
#define DIFFICULTY_BEGINNER 1
#define DIFFICULTY_INTERMEDIATE 2

//Stage definitions for all stages that may appear
#define STAGE_SERVER_DIALOG "server_diag"
#define STAGE_CROSS "cross"
#define STAGE_PLAY "play"
#define STAGE_COOP "coop"
#define STAGE_PVP "pvp"
#define STAGE_CLASSIC "classic"
#define STAGE_RIFT "rift"
#define STAGE_NORMALBLIND "normal_blind"
#define STAGE_BEGINNER "beginner"
#define STAGE_INTERMEDIATE "intermediate"
#define STAGE_SOLOQ "soloq"
#define STAGE_DODGED "dodged"
#define STAGE_ACCEPT "accept"
#define STAGE_SEARCH "search"
#define STAGE_CHAMPIONS "champions"
#define STAGE_LOCKIN "lockin"
#define STAGE_SEND "send"
#define STAGE_CONTINUE "continue"
#define STAGE_TITTLELESSDIAG "titleless_diag"
#define STAGE_HOME "home"
#define STAGE_ARAM "aram"
#define STAGE_HOWLING_ABYSSS "howling_abyss"
#define STAGE_NORMAL_ALL_RANDOM "normal_all_random"

//Tip definitions
#define TIP_DODGING "Dodging queue, champ taken."
#define TIP_OTHER_DODGED "Other player has dodged. Requeuing."
#define TIP_DODGED "Waiting for dodge timer."


#endif