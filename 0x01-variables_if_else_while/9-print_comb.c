#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints all possible combination
 * of single-digit number
 * Return: always 0
 */
int main(void)
{
int i, j;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
}
}
return (0);
}
