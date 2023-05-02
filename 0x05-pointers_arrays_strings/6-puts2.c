#include "main.h"

/**
 * puts2 - prints every other character of a string
 *         starting with the first character, followed by \n
 * @str: string
 * Return: nothing
 */

void puts2(char *str)
{
char c;
for (c = 0; str[c] != '\0'; c += 2)
{
_putchar(str[c]);
}
_putchar('\n');
}
