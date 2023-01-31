#include "dog.h"

void print_dog(struct dog *d)
{
	if (*&d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (*&d->age == NULL)
	{
		printf("Name: (nil)");
	}
	if (*&d->owner == NULL)
	{
		printf("Name: (nil)");
	}
	
	printf(*&d);
}
