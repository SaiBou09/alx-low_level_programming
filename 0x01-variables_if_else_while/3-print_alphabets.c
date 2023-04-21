#include <stdio.h>
/**
 * main - Entry point
 * Description: It prints alphabet in lower case
 * then in upper case
 * Return: always 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
