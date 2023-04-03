#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes
 *
 * return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = s;
	unsigned char uc = b;

	while (n-- > 0)
	{
		*p++ = uc;
	}
	return (s);
}
