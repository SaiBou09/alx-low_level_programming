#include "main.h"

/**
 * _puts - prints a string, followed by\n, to stdout
 * @str: string
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n');
}
