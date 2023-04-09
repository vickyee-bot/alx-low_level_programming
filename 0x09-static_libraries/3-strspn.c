#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: bytes from
 *
 * return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;
	i = 0;
	j = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				count++;
			break;
		}
			j++;
		}
		if (!accept[j])
		{
			break;
		}
		i++;
	}
	return (count);
}

