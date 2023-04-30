#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array and set it to zero
 * @nmemb: number of elements in the array
 * @size: size of each element in the array
 *
 * Return: pointer to the allocated memory, or NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *cptr;

	/* handle 0 inputs */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* allocate memory */
	ptr = malloc(nmemb * size);

	/* handle malloc failure */
	if (ptr == NULL)
		return (NULL);
	/* set memory to zero */
	cptr = ptr;
	for (i = 0; i < nmemb * size; i++)
		cptr[i] = 0;
	return (ptr);
}
