#include "main.h"

/**
 * **alloc_grid - Function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Return: 0, array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int x;
	int y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * width);

	for (x = 0; x < width; x++)
	{
		for (y = 0; y < height; y++)
		array[x] = malloc(sizeof(int) * height);

		{
			if (array[x] == NULL)
			{
				return (NULL);
			}
			else
			{
				array[x][y] = 0;
			}
		}
	}
	return (array);
}
