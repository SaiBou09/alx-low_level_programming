#include "main.h"
/**
 * print_alphabet  - utilizes _putchar function
 *                   to  print the alphabet, in lowercase
 *                   from a to z, followed by a new line
 */

void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)

_putchar(ch);
_putchar('\n');
}
