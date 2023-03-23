#include "main.h"
/**
 * print_numbers - prints 0 to 9
 */
void print_numbers(void)
{
	char i;

	while (i <= 57)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
