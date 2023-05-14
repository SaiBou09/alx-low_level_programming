#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: size of argv array
 * @argv: commands passed
 * Return: always 0
 */

int main(int argc, char const *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
