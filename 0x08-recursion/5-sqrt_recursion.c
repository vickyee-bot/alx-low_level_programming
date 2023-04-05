#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 *
 * Return: -1 if n has no square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (find_sqrt(n, 1, n));
}
