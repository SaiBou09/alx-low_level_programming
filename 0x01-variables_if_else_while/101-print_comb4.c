#include <stdio.h>
/**
 * main:A program that prints all possible combination of 3 digits
 * separated by , followed by a new line
 * The 3 digits must be different
 * Only the smallest combination is printed
 * 012, 021, 102, 120, 210, 201 considered the same of 3 digits of 1, 2, 0
 * Only putchar is allowed
 * Putchar allowed only six times
 * Return: always 0
 */
int main(void)
{
int a = '0', b, c;
for (a = '0'; a <= '7'; a++)
{
for (b = a + '1'; b <= '8'; b++)
{
for (c = b + '1'; c <= '9'; c++)
{
putchar(a);
putchar(b);
putchar(c);
if (a != '7' || b != '8' || c != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
