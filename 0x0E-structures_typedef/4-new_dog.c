#include <stdlib.h>
#include <string.h>
#include "dog.h"
#include <stdio.h>
/**
 * *new_dog - function that creates a new dog.
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 *
 * Return: always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	new_dog_ptr->name = malloc(strlen(name) + 1);
	new_dog_ptr->owner = malloc(strlen(owner) + 1);

	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(new_dog_ptr->name, name);
	new_dog_ptr->age = age;
	strcpy(new_dog_ptr->owner, owner);

	return (new_dog_ptr);
}
