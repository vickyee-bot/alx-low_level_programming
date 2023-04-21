#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of the array
 * @c: character to initialize 
 *
 * Return: pointer to the newly created array
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}
	i = malloc(sizeof(char) *size);
	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		i[j] = c;
	}
	return (i);
}
