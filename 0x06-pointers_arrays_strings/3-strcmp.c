#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: less than, equal orgreater than 0
 */

int _strcmp(char *s1, char *s2)
{
int i;
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


