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
for (i = '0'; i < '9'; i++)
{
for (j = i + 1; j <= 9; j++)
{
if (i != j)
{
putchar(i);
putchar(j);
if (i == '8' && j == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
