/* vim:set ft=lpc: */
/* Last Indented: 1360770374 */
#include <globals.h>

// needs fixed to handle passwords

void catch_tell(string str)
{
    receive(str);
}

void logon()
{
    object user;

    write("Welcome to BallsMUD!\n\n");
    cat("/etc/motd");
    write("\n> ");
    user= new("/clone/user");
    user->set_name("stuf" + getoid(user));
    exec(user, this_object());
    user->setup();
    user->move(VOID_OB);
    destruct(this_object());
}
