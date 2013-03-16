/* vim:set ft=lpc: */
/* Last Indented: 1360770374 */
#include <command.h>

int main(string arg)
{
    object obj;

    if (!arg) {
        return notify_fail("usage: dest object\n");
    }
    obj = find_object(arg);
    if (!obj) {
        obj = present(arg);
        if (!obj) {
            obj = present(arg, environment(previous_object()));
        }
    }
    if (!obj) {
        return notify_fail("can't find that.\n");
    }
    obj->remove();
    if (obj) {
        destruct(obj);
    }
    return 1;
}
