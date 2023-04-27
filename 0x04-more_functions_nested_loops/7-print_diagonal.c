#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: number of times character \ is printed
 */

void print_diagonal(int n)
{
int lnChr;
if (n <= 0)
_putchar('\n');
else
{
for (lnChr = 1; lnChr <= n, lnChr++)
_putchar('\');
_putchar('\n');
}
}
