#ifndef DOG_H
#define DOG_H

#include <stdio.h>


/**
 * struct dog  - stores info for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/*
 * Description - Implict decleration means you are trying to use a function
 * that is not declared
 */

#endif /* DOG_H */
