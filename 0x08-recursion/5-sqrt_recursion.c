#include "main.h"

/**
 * sqrt_recursive - Helper function to calculate square root recursively
 * @n: The number to calculate the square root for
 * @start: The starting point for binary search
 * @end: The ending point for binary search
 *
 * Return: The square root of n
 */
int sqrt_recursive(int n, int start, int end)
{
	int mid;
	int square;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	mid = (start + end) / 2;
	if (mid > n / mid)
		return (sqrt_recursive(n, start, mid - 1));

	square = mid * mid;

	if (square == n)
		return (mid);
	else if (square < n)
		return (sqrt_recursive(n, mid + 1, end));
	else
		return (sqrt_recursive(n, start, mid - 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root for
 *
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	return (sqrt_recursive(n, 0, n));
}
