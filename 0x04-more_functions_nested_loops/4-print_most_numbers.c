#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9, except 2 and 4
 *                      followed by a new line
 *
 * Return: Always (0)
 */

void print_most_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
{
if (c == 2 || c == 4)
continue;
_putchar(c + 48);
}
_putchar('\n');
}
