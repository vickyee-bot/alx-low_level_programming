#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 *
 * return: string or 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
		putchar(*s);
		_puts_recursion(s + 1);
	_putchar('\n');
}
