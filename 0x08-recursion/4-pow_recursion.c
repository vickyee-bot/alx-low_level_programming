#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to power
 * @y: power value
 *
 * return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 0)
	{
		return (0);
	}
	else
	{
	return (_pow_recursion(x ^ y));
	}
}