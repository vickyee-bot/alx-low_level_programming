#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	while (*s != '\0')
	{
		s++;
	}
	_putchar(*s);
	_strlen_recursion(s + 1)
}
