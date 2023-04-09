#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 *
 * return: pointer s that matches accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	const char *p;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return ((char *)s);
			}
		}
		s++;
	}
	return (NULL);
}
