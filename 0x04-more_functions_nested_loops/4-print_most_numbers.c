#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints 0 to 9 except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char i;

	while (i = '0';i <= '9'; i++)
	{
		if (i == '2' || i =='4')
			continue
		putchar(i + '0');
	}
	putchar('\n');
}
