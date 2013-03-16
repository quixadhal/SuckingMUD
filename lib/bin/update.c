/* vim:set ft=lpc: */
/* Last Indented: 1360770374 */
#include <globals.h>

int main(string file)
{
    object obj;

    // need to call resolve_path() and query_cwd()
    if (!file) {
        return notify_fail("update what?\n");
    }
    if (obj = find_object(file)) {
        destruct(obj);
    }
    load_object(file);
    return 1;
}
