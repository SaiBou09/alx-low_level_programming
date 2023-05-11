#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
int long = 0;
if (*s)
{
long++;
long += _strlen_recursion(s + 1);
}
return (long);
}
