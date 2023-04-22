#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that print lowercase alphabet
 * in reverse, followed by new line
 * Return: always 0
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
