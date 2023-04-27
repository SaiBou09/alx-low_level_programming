#include "main.h"
/**
 *  _isupper - checks for uppercase characters
 *  @c: takes integer as input for function
 *
 *  Return: 1 if uppercase
 *          0 if elsewise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
