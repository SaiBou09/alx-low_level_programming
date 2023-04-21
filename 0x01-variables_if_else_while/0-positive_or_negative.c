#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A function that generates a random number and checks
 * if it is positive,negative,or zero
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand();
	printf("%d\n", n);
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	} else
	{
		printf("is negative\n");
	}
	return (0);
}
