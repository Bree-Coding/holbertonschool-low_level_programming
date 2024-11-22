#include "fuction_pointors.h"

/**
 * array_iterator - Function that executes a function given
 * as a parameter on each element of an array
 * @array: an array
 * @size: the size of the array
 * @action: a pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x;

	if (array != NULL || size != NULL)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x])
		}
return (0)
}
