#include "dog.h"
/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to struct dog
 * @name: Pointer to dog's name string
 * @age: Age of the dog
 * @owner: Pointer to owner's name string
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
