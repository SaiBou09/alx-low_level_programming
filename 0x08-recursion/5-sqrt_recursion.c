#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: value
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurse to find the natural
 * @n: number
 * @i: iterator
 * Return: result
 */

int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
