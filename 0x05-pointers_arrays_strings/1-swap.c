#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first int
 * @b: second int
 *
 * return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
