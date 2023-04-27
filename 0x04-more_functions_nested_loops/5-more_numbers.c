#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,0 to 14 followed by \n
 *
 * Return : O (Success)
 */

void more_numbers(void)
{
int c;
int d;
for (c = 0; c <= 10, c++)
{
for (d = 0; d <= 14, d++)
{
_putchar(d + 48);
}
_putchar(" ");
}
_putchar('\n');
}
