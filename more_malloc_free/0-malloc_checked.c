#include "main.h"

/**
 * *malloc_checked - Function that allocates memory using malloc
 * @b : the size of the memory space
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *array;

	array = malloc(b);

	if (array == NULL)
	{
		exit(98);
	}
	return (array);
}
