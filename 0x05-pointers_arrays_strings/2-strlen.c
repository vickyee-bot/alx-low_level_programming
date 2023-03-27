#include "main.h"
/**
 * _strlen - Computes the length of a string
 * @s: Pointer to the string to compute the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
