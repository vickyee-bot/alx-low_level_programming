#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: bytes
 *
 * return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest = dest;
	char *src = src;

	if ((dest != NULL && src != NULL))
	{
	while (n)
	{
		*dest++ = *src++;
		n--;
	}
	return (dest);
	}
}
