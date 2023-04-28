#include "main.h"
/**
 * main - prints the numbers from 1 to 100
 *          followed by a new line.
 *          multiples of three print "Fizz" instead of the number
 *           for the multiples of five print "Buzz"
 *           multiples of both three and five print "FizzBuzz"
 * Return: always (0)
 */

int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if ((n % 3 == 0) && !(n % 5 == 0))
printf("Fizz");
else if ((n % 5 == 0) && !(n % 3 == 0))
printf("Buzz");
else if ((n % 3 == 0) && (n % 5 == 0))
printf("FizzBuzz");
else
printf("%d", n);
if (n != 100)
printf(" ");
else
printf("\n");
}
return (0);
}



