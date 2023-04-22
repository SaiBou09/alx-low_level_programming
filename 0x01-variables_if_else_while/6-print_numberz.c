#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints single digits numbers
 * Of base 10, starting from O
 * followed by a new line
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + 0);
}
putchar('\n');
return (0);
}
