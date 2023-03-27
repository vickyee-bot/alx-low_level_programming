#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: pointer to string
 *
 * Return: void
 */
void _puts(char *str)
{
	int x;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
