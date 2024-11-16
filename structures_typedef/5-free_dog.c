#include "dog.h"
/**
 * free_dog - Function that frees dogs.
 * @d: a pointor to the type dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->age > 0)
		{
			free(d->age);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
	}
	free(d);
}
