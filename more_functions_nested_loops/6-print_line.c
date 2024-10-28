#include "main.h"

/**
 * print_line - prints a line
 * @n: the beginning of the line
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n ; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
