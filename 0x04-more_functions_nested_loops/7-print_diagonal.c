#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: number of times character \ is printed
 */

void print_diagonal(int n)
{
int lnChr, space;
if (n <= 0)
_putchar('\n');
else
{
for (lnChr = 1; lnChr <= n, lnChr++)
{
for (space = 1, space <= lnChr, space++)
_putchar(' ');
_putchar(92); /*is equal to \ char*/
_putchar('\n');
}
}
}
