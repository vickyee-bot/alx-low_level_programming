#include "main.h"
#include <stdio.h>
/**
 * sqrt_helper - returns the square root of a number
 * @n: the number
 * @low: the lower bound
 * @high: the upper bound
 *
 * Return: the square root of n or -1 if n has no square root
 */
int sqrt_helper(int n, int low, int high);


/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 *
 * Return: -1 if n has no square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return sqrt_helper(n, 0, n);
}
int sqrt_helper(int n, int low, int high)
{
	if (low > high)
		return (-1);
	int mid = (low + high) / 2;
	int sqr = mid * mid;

	if (sqr == n)
		return (mid);
	else if (sqr < n)
		return (sqrt_helper(n, mid + 1, high));
	else
		return (sqrt_helper(n, low, mid - 1));
}
