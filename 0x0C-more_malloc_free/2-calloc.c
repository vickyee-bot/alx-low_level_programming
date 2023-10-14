#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array elements
 * @size: of the array
 *
 * Return: always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;

	if (total_size / size != nmemb)
		return (NULL);
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		((char *)ptr)[i] = 0;

	return (ptr);
}
