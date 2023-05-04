#include "main.h"
/**
 *  *_strcat - concatenates two strings
 *  @dest: string to append to
 *  @src: string to be appended
 *  Return: pointer to dest value
 */

char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*p)
{
*p++;
}
while (*src)
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}
