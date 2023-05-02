#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: lenth of string
 */

int _strlen(char *s)
{
int counter;
for (counter = 0; *s != '\0'; s++)
++counter;
return (counter);
}	

