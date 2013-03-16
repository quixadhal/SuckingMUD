/* vim:set ft=lpc: */
/* Last Indented: 1360770374 */
// file: globals.h

#define BIN_DIR "/bin"
#define DAEMON_DIR "/daemon"
#define CONFIG_DIR "/etc"
#define LOG_DIR    "/log"

#define VIRTUAL_D  "/daemon/virtual"

#define LOGIN_OB   "/clone/login"
#define USER_OB    "/clone/user"
#define VOID_OB    DAEMON_DIR + "/void"

#define BASE            "/inherit/base"
#define OVERRIDES_FILE  DAEMON_DIR + "/simul_efun"

#define COMMAND_PREFIX BIN_DIR + "/"

// classes for message() efun.
#define M_STATUS "status"
#define M_SAY    "say"

#define CLEAN_UP "/inherit/clean_up"

