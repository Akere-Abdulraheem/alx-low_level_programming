#include "dog.h"

/**
 * init_dog - initialize a var of type struct dog
 * @d: struct name
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (*&d == NULL)
	{
		printf("Ok")
	}
	*&d->name = name; /* '->' is used instead of '.' because d is a pointer */
	*&d->age = age;
	*&d->owner = owner;
}
