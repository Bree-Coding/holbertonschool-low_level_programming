#include "main.h"

/**
 * *array_range - Function that creates an array of integer
 * @min: the first value of the array
 * @max: the last value of the array
 * Return: array, NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int x;
	int y = 0;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * (max - min) + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	else
	{
		for (x = min; x <= max; x++)
		{
			array[y] = x;
			y++;
		}
		return (array);
	}
}
