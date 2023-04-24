#include <stdio.h>
/**
 * main -Entry point
 * Description: A program that prints all possible combination of 3 digits
 * Return: always 0
 */
int main(void)
{
int a = 0, b, c;
while (a <= '9')
{
b = '0';
while (b <= '9')
{
c = '0';
while (c <= '9')
{
if (a != b && a < b && b != c && b < c)
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
c++;
}
b++;
}
a++;
}
putchar('\n');
return (0);
}
