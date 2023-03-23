#include "main.h"
/**
 * mul - multiples two integers
 * @a: first value
 * @b: second value
 * Return: 0
 */
int mul(int a, int b)
{
	int result = (0);

	while (b != 0) {
		if (b & 1) {
			result += a;
		}
		a <<= 1;
		b >>= 1;
	}
	return result;
}
