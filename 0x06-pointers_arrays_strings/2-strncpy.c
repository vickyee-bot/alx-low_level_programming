#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	if (dest == '\0')
		return ('\0');
	while (*src != '\0' && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return start;
}
