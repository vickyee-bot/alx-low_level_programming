#include "main.h"

/**
 * more_numbers - print more numbers
 */
void more_numbers(void)
{
	int i = 1;
	int j = 0;
	while (i <= 10)
	{
		while (j <= 14)
		{
			if (j >= 10)
				_putchar('1');
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
