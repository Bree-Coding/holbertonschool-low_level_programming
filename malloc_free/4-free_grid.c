#include "main.h"

/**
 * free_grid - Function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: a pointor to the 2 dimensional grid
 * @height: height of the grid
 * Return: array
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
