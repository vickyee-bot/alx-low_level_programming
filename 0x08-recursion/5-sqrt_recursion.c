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
	double i = n / 2;
	double j = 1 / 100000;

	while ((i * i - n) > j)
	{
		i = (i + n / i)/ 2.0;
	}
	return (i);
}
