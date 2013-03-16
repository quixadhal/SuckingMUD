/* vim:set ft=lpc: */
/* Last Indented: 1360770374 */

    int
clean_up(int inh)
{
    destruct(this_object());
    return 0;
}
