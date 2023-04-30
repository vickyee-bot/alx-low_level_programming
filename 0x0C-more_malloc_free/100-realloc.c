#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to the memory block to reallocate
 * @old_size: size of the old memory block in bytes
 * @new_size: size of the new memory block in bytes
 *
 * Return: pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	/* if new_size is zero, free ptr and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* if ptr is NULL, allocate new block and return pointer */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	/* allocate new block of new_size */
	new_ptr = malloc(new_size);

	/* copy old block to new block, up to the minimum of old and new sizes */
	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);

	/* free old block */
	free(ptr);
	/* return pointer to new block */
	return (new_ptr);
}
