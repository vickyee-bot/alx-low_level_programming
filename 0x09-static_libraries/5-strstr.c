#include "main.h"
#include <stdio.h>
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
		char *haystack = haystack;
		char *needle = needle;

		while (*needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
		return (NULL);
}
