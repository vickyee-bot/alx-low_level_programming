#include "dog.h"
#include <stddef.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @dog *d: pionter
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 *
 * Return: always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
