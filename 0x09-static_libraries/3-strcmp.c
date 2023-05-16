#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 1 if true, 0 if false
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (*s1)
{
if (*s1 != *s2)
{
i = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (i);
}


