#include "main.h"

/**
 * _islower  - checks for lower case characters.
 *
 * @c: checks input of function
 * Return: return 1 if 'c' is lower case
 *         return 0 if otherwise
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
