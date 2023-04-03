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
	char *dest = (char *)dest;
	char *src = (char *)src;
	int i;

	while (i < n)
	{
		dest[i] = src [i];
		i++;
	}
	return (dest);
}
