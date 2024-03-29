#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @dog *d: structure
 *
 * Return: always 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
