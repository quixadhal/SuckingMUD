/* vim:set ft=lpc: */
/* Last Indented: 1360770374 */
#include <globals.h>
#include <command.h>

int main(string arg)
{
    string name = previous_object()->query_name();

    ACCOUNT_D->set_offline(name);
    write("Bye.\n");
    say((string)previous_object()->query_name()
            + " leaves this reality.\n");
    previous_object()->remove();
    return 1;
}
