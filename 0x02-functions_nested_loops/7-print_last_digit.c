#include "main.h"
/**
 * print_last_digit - prints last digit 
 * @i:integer value
 *
 * Return: 0
 */
int print_last_digit(int i)
{
	int x;
	x = i % 10;

	_putchar(x);
	_putchar(x);
	_putchar('\n');
	return (x);
}
