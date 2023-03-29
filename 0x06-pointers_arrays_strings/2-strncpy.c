#include "main.h"
#include <stddef.h>
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

	if (dest == NULL)
		return (NULL);
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
