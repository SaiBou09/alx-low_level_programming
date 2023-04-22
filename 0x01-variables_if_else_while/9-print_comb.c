#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints all possible combination
 * of single-digit number
 * Return: always 0
 */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
