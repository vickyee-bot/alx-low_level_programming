#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: pointer to string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
		length++;
	for (i = length - 1; i >= 0; i--)
		_putchar(s[length]);
	_putchar('\n');
}
