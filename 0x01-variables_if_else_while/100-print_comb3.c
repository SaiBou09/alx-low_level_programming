#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints all possible combination of 2 digits
 * Separated by a, followed by a space
 * the 2 digits must be different
 * 01 and 10 are considered the same number
 * prints only the smallest combination of 2 digits
 * Return: always 0
 */
int main(void)
{
int i, j;
while (i <= '9')
{
j = '0';
while (j <= '9')
{
if (i != j && i < j)
{
putchar(i);
putchar(j);
if (i + j != 17)
{
putchar(',');
putchar(' ');
}
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
