#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints all single digit number
 * Of base 10 starting by zero
 * Return: always 0
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
printf("%d", i);
}
putchar('\n');
return (0);
}
