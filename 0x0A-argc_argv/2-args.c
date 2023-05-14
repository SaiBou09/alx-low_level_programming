#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array of string of commandline arg
 * Return: 0
 */

int main(int argc, char const *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
