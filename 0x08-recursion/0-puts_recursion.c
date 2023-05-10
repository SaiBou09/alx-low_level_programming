#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by \n
 * @s : string
 * return: nothing
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}

