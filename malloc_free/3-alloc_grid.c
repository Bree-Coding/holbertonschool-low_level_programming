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
	int n;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * width);

	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < width; x++)
	{
		array[x] = malloc(sizeof(int) * height);
		if (array[x] == NULL)
		{
			for (n = 0; n < x; n++)
			{
				free(array[n]);
			}
			free(array);
			return (NULL);

			for (y = 0; y < height; y++)
			{
				array[x][y] = 0;
			}
		}
	}
	return (array);
}
