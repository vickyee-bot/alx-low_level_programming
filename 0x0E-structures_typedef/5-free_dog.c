#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * free_dog - function that frees dogs
 * @d: structure
 *
 * Return: always 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
