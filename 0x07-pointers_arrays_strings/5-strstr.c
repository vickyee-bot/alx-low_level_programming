#include "main.h"
#include <stddef>
/**
 * _strstr - locates substring
 * @haystack: string
 * @needle: substring
 *
 * return: needle or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	if (*needle != '\0')
	{
		return (haystack);
	}
	if (*haystack == *needle)
	{
		needle++;
	}
	haystack++;
	}
	if (needle == '\0')
	{
	return haystack;
	}
	else
	{
		return (NULL);
	}
}
