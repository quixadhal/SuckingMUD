/* vim:set ft=lpc: */
/* Last Indented: 1360770374 */
#include <globals.h>
#include <command.h>

int main(string arg)
{
    foreach (object ob in users()) {
        ACCOUNT_D->set_offline(ob->query_name());
        tell_object(ob, "Driver object is being shut down by " + this_user()->query_name() + ", right NOW!\n");
    }
    shutdown(0);
    return 1;
}
