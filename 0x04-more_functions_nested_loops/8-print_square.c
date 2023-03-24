#include "main.h"
/**
 * print_square - draws a square line in the terminal
 * @size: size of the square
 *
 * return: a square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;
	while (i < size)
	{
		int j = 0;
		while (j < size)
		{
			_putchar('#');
		j++;
	}
	_putchar('\n');
	i++;
}
}
}
