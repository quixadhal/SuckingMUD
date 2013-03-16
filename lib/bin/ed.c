/* vim:set ft=lpc: */
/* Last Indented: 1360770374 */
#include <globals.h>

int main(string file)
{
    // need to call resolve_path() and query_cwd()
    this_player()->start_ed(file);
    return 1;
}
