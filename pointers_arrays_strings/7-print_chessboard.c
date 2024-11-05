#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard
 * @a: a board pointor
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; a[x][7]; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
