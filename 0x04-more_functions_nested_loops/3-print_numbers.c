#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	char i;

	while (i <= '9')
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}
