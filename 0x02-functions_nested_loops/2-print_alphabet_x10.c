#include"main.h"

/**
 * print_alphabet_x10 - Entry type
 * Description: prints alphabet 10*, folllowed by \n
 *
 */

void print_alphabet_x10(void)
{
int ln;
int cn;
for (ln = 0; ln <= 9; ln++)
{
for (cn = 'a'; cn <= 'z'; cn++)
_putchar(cn);
_putchar('\n');
}
}
