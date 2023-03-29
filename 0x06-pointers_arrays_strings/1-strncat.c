#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes in src
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return start;
}
