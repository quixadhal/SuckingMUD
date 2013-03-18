/* vim:set ft=lpc: */
/* Last Indented: 1360770374 */
// file: /daemon/master.c

#include <globals.h>

void create()
{
}

int valid_shadow(object ob)
{
    if (ob->query_prevent_shadow(previous_object())) {
        return 0;
    }
    return 1;
}

int valid_author(string)
{
    return 1;
}

// valid_override: controls which simul_efuns may be overridden with
// efun:: prefix and which may not.  This function is only called at
// object compile-time.
//
// returns: 1 if override is allowed, 0 if not.

int valid_override(string file, string name)
{
    if (file == OVERRIDES_FILE) {
        return 1;
    }
    if ((name == "move_object") && (file != BASE))
        return 0;
    //  may also wish to protect destruct, shutdown, snoop, and exec.
    return 1;
}

// valid_seteuid: determines whether an object ob can become euid str.
// returns: 1 if seteuid() may succeed, 0 if not.

int valid_seteuid(object, string)
{
    return 1;
}

// valid_domain: decides if a domain may be created
// returns: 1 if domain may be created, 0 if not.

int valid_domain(string)
{
    return 1;
} 

// valid_socket: controls access to socket efunctions
// return: 1 if access allowed, 0 if not.

    int
valid_socket(object, string, mixed *)
{
    return 1;
}

// Write and Read privileges:
//
// valid_write: called with the file name, the object initiating the call,
//  and the function by which they called it. 
// return: 1 if access allowed, 0 if access not allowed.

int valid_write(string, mixed, string)
{
    return 1;
}

// valid_read:  called exactly the same as valid_write()

int valid_read(string, mixed, string)
{
    return 1;
}

private int y = 1;

void flag(string str)
{
    switch (str) {
        case "sprintf":
            {
                string foo = "This is a test.\n";
                string bar = "Of the sprintf benchmark system.\n";
                string bazz = "This is only a test.\n";

                for (int i = 0; i < 10000; i++) {
                    sprintf("Let's see if %20|s this is any %-100s faster than the %20i old way.%s", foo, bar, 42, bazz);
                }
                shutdown();
                break;
            }
        default:
            write("Unknown flag.\n");
    }
    shutdown();
}

object connect()
{
    object login_ob;
    mixed err;

    err = catch(login_ob = new(LOGIN_OB));

    if (err) {
        write("It looks like someone is working on the player object.\n");
        write(err);
        destruct(this_object());
    }
    return login_ob;
}

// compile_object: This is used for loading MudOS "virtual" objects.
// It should return the object the mudlib wishes to associate with the
// filename named by 'file'.  It should return 0 if no object is to be
// associated.

mixed compile_object(string file)
{
    //    return (mixed)VIRTUAL_D->compile_object(file);
    return 0;
}

// This is called when there is a driver segmentation fault or a bus error,
// etc.  As it's static it can't be called by anything but the driver (and
// master).

protected void crash(string, object, object)
{
    error("foo\n");
    foreach (object ob in users())
        tell_object(ob, "Master object shouts: Damn!\nMaster object tells you: The game is crashing.\n");
#if 0
    log_file("crashes", MUD_NAME + " crashed on: " + ctime(time()) +
            ", error: " + error + "\n");
    if (command_giver) {
        log_file("crashes", "this_player: " + file_name(command_giver) + "\n");
    }
    if (current_object) {
        log_file("crashes", "this_object: " + file_name(current_object) + "\n");
    }
#endif
}

// This only gets called if reserved size is set in the config file,
// and if the driver runs out of heap space and starts using the
// reserved memory block.

protected int slow_shutdown(int minutes)
{
    foreach (object ob in users())
        tell_object(ob, "Master object shouts: The game is crashing in " + minutes + " minutes!\n");

    return 1;
}

// Function name:   update_file
// Description:     reads in a file, ignoring lines that begin with '#'
// Arguements:      file: a string that shows what file to read in.
// Return:          Array of nonblank lines that don't begin with '#'
// Note:            must be declared static (else a security hole)

protected string * update_file(string file)
{
    string *arr;
    string str;
    int i;

    str = read_file(file);
    if (!str) {
        return ({});
    }
    arr = explode(str, "\n");
    for (i = 0; i < sizeof(arr); i++) {
        if (arr[i][0] == '#') {
            arr[i] = 0;
        }
    }
    return arr;
}

// Function name:       epilog
// Return:              List of files to preload

string * epilog(int)
{
    string *items;

    items = update_file(CONFIG_DIR "/preload");
    return items;
}

// preload an object

void preload(string file)
{
    int t1;
    int t2;
    string err;

    if (file_size(file + ".c") == -1)
        return;

    t1 = time();
    write("Preloading : " + file + "...");
    t2 = time_expression { err = catch(call_other(file, "??")); };
    if (err != 0) {
        write("\nError " + err + " when loading " + file + "\n");
    } else {
        t1 = time() - t1;
        //write("(" + t1/60 + "." + t1 % 60 + ")\n");
        write(sprintf("(%05.3f)\n", t2/1000000.0));
    }
}

// Write an error message into a log file. The error occured in the object
// 'file', giving the error message 'message'.

void log_error(string, string message)
{
    write_file(LOG_DIR "/compile", message);
}

// save_ed_setup and restore_ed_setup are called by the ed to maintain
// individual options settings. These functions are located in the master
// object so that the local admins can decide what strategy they want to use.

int save_ed_setup(object who, int code)
{
    string file;

    if (!intp(code)) {
        return 0;
    }
    file = user_path(who) + ".edrc";
    rm(file);
    return write_file(file, code + "");
}

// Retrieve the ed setup. No meaning to defend this file read from
// unauthorized access.

int retrieve_ed_setup(object who)
{
    string file;
    int code;

    file = user_path(who) + ".edrc";
    if (file_size(file) <= 0) {
        return 0;
    }
    sscanf(read_file(file), "%d", code);
    return code;
}

// When an object is destructed, this function is called with every
// item in that room.  We get the chance to save users from being destructed.

void destruct_environment_of(object ob)
{
    if (!interactive(ob)) {
        return;
    }
    tell_object(ob, "The object containing you was dested.\n");
    ob->move(VOID_OB);
}

// make_path_absolute: This is called by the driver to resolve path names in ed.

string make_path_absolute(string file)
{
    file = resolve_path((string)this_player()->query_cwd(), file);
    return file;
}

string creator_file(string str)
{
    return (string)call_other(DAEMON_DIR "/simul_efun", "creator_file", str);
}

string domain_file(string str)
{
    return (string)call_other(DAEMON_DIR "/simul_efun", "domain_file", str);
}

string author_file(string str)
{
    return (string)call_other(DAEMON_DIR "/simul_efun", "author_file", str);
}

string privs_file(string f)
{
    return f;
}

protected void error_handler(mapping map, int flag)
{
    object ob;
    string str;

    ob = this_interactive() || this_player();
    if (flag) str = "*Error caught\n";
    else str = "";
    str += sprintf("Error: %s\nCurrent object: %O\nCurrent program: %s\nFile: %O Line: %d\n%O\n",
            map["error"], (map["object"] || "No current object"),
            (map["program"] || "No current program"),
            map["file"], map["line"],
            implode(map_array(map["trace"],
                    (: sprintf("Line: %O  File: %O Object: %O Program: %O", $1["line"], $1["file"], $1["object"] || "No object", $1["program"] ||
                               "No program") :)), "\n"));
    write_file("/log/log", str);
    if (!flag && ob) tell_object(ob, str);
}

int valid_bind()
{
    // This is really unsafe, but testsuite uses it to test bind()
    return 1;
}

int valid_hide()
{
    // same here
    return 1;
}

int valid_compile_to_c()
{
    return 1;
}
