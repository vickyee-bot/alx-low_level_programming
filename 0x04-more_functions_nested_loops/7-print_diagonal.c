#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times
 *
 * return: a line
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;
	while (i < n)
	{
		int j = 0;
		while (j < n)
		{
		if (j == i)
			_putchar('\\');
		else if (j < i)
			_putchar(' ');
		j++;
	}
	_putchar('\n');
	i++;
}
}
}
