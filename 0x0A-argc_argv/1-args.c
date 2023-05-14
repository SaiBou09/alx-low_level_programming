#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: size of argv
 * @argv: arguments passed
 * Return: always success
 */

int main(int argc, char const *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
