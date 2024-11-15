#ifndef dog_h
#define dog_h

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog - a new type for dog's informations
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

#endif
