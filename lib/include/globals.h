/* vim:set ft=lpc: */
/* Last Indented: 1360770374 */
// file: globals.h

#ifndef __GLOBALS_H__
#define __GLOBALS_H__

#define MUDLIB_VERSION  "0.006"

#define BIN_DIR         "/bin"
#define DAEMON_DIR      "/daemon"
#define CLONE_DIR       "/clone"
#define CONFIG_DIR      "/etc"
#define LOG_DIR         "/log"
#define USER_DIR        "/u"
#define INHERIT_DIR     "/inherit"

#define MOTD            CONFIG_DIR "/motd"

#define ACCOUNT_DATA    CONFIG_DIR "/accounts.o"
#define ACCOUNT_D       DAEMON_DIR "/account"

#define VIRTUAL_D       DAEMON_DIR "/virtual"

#define LOGIN_OB        CLONE_DIR "/login"
#define USER_OB         CLONE_DIR "/user"
#define VOID_OB         DAEMON_DIR "/void"

#define BASE            INHERIT_DIR "/base"
#define OVERRIDES_FILE  DAEMON_DIR "/simul_efun"

#define COMMAND_PREFIX  BIN_DIR "/"

// classes for message() efun.
#define M_STATUS        "status"
#define M_SAY           "say"

#define CLEAN_UP        INHERIT_DIR "/clean_up"

// input_to flags
#define INPUT_TO_NORMAL         0
#define INPUT_TO_NOECHO         1
#define INPUT_TO_NOBYPASS       2

// write_file flags
#define WRITE_FILE_APPEND       0
#define WRITE_FILE_OVERWRITE    1

#endif
