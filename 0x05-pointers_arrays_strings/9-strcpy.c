#include "main.h"
/**
 * _strcpy - copies string pointed by src to buffer pointed to by dest
 * @dest: buffer to copy string to
 * @src: string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
