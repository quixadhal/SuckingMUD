/* vim:set ft=lpc: */
/* Last Indented: 1360770374 */
#include <command.h>

int main(string arg)
{
    write("Bye.\n");
    say((string)previous_object()->query_name()
            + " leaves this reality.\n");
    previous_object()->remove();
    return 1;
}
