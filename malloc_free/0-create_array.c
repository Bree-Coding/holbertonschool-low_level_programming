#include "main.h"

/**
 * *create_array - Function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: a character
 * Return: a pointer to the array, '\0'
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}
	return (array);
}
