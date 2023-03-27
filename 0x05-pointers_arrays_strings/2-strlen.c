#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: length of string
 *
 * return: 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		length++;
	}
	return (0);
}
