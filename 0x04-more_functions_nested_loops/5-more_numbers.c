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
int e;
for (c = 1; c <= 10; c++)
{
for (d = 0; d <= 14; d++)
{
e = d;
if (d > 9)
{
_putchar(1 + 48);
e = d % 10;
}
_putchar(e + 48);
}
_putchar('\n');
}
}
