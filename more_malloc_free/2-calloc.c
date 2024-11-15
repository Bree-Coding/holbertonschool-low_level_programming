#include "main.h"

/**
 * *_calloc - Function that allocates memory for an array, using malloc
 * @nmemb: number of elements of the array
 * @size: size of the allocated memory
 * Return: NULL, array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	for (x = 0; x <= nmemb; x++)
	{
		array[x] = 0;
		return (array);
	}
	return (NULL);
}