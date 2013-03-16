/* vim:set ft=lpc: */
/* Last Indented: 1360770374 */
#include <command.h>

int main(string arg)
{
    say((string)previous_object()->query_name()
            + " says: " +  arg + "\n");
    return 1;
}
