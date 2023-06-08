#include "main.h"
#include <stdio.h>
/***
 * _print_rev_recursion - function that prints a string in reverse
 * @s: pointer string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_putchar(s-1);
}
