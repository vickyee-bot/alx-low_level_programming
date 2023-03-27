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

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
