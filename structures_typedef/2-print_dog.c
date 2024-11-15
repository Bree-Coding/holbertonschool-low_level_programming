#include "dog.h"

/**
 * print_dog - Function that prints a struct dog
 * @d: a pointor to the type dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
	}
	else if (d->name == NULL || d->age <= 0 || d->owner == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %1f\n", d->age);
		printf("Name: %s\n", d->name);
	}
}
