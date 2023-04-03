#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be scanned
 * @c: character to be searched in s.
 *
 * return: char c or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
