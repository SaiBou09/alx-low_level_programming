#include <stdio.h>
/**
 * main -Entry point
 * Description: A program that prints alphabets in lowercase
 * Followed by a new line
 * All letters except q and e
 * Return: always O
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
putchar(c);
}
putchar('\n');
return (0);
}
