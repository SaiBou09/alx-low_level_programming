#include <stdio.h>
/**
 * main -Entry point
 * Description: A program that print all numbers of base 16
 * Followed by a new line
 * Return: always 0
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
