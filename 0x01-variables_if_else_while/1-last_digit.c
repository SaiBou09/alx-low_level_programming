#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints last digit of variable stored in n
 * Result: 0 (Success)
 */
int main(void)
{
int n, last_digit;

srand(time(0));

n = rand() - RAND_MAX / 2;
last_digit = abs( n % 10);
printf("Last digit of %d is ", n);
if (last_digit > 5)
{
printf("Last digit of %d is and is greater than 5\n", last_digit);
}
else if (last_digit == 0)
{
printf("Last digit of %d is and is 0", last_digit);
}
else
{
printf("Last digit of %d is and is less than 6 and not 0", last_digit);
}
return (0);
}



