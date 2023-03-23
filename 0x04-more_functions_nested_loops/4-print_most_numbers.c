#include "main.h"
/**
 * print_most_numbers - prints 0 to 9 except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char i;

	while (i <= '9')
	{
		if (
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}
