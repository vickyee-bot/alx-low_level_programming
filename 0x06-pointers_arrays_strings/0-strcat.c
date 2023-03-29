#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: first string
 * @src: second string
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
}
