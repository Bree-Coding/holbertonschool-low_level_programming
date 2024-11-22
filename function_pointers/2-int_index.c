#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: an array
 * @size: the size of the array
 * @cmp: a function to a pointer
 * Return: x, -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size < 0)
	{
		return (-1);
	}

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (x = 0 ; x < size; x++)
	{
		if (cmp(array[x]) == 1)
		{
			return (x);
		}
	}
	return (0);
}
