#ifndef DOG_H
#define DOG_H
#define NULL ((void *)0)
/**
 * struct dog - struct containing dog's information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: struct containing dog's information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
