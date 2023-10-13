#include "main.h"
/**
 * is_divisible - Helper function to check if a number is divisible
 * @n: The number to check for divisibility
 * @divisor: The divisor to check against
 *
 * Return: 1 if divisible, 0 otherwise
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
		return (0);
	if (n % divisor == 0)
		return (1);

	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (!is_divisible(n, n / 2));
}
