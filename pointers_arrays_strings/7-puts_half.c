#include "main.h"

/**
 * puts_half - print the half of a string
 * @str : a string
 */

void puts_half(char *str)
{
	int x = 0;
	int y;

	while (str[x] != '\0')
	{
		x++;
	}

	y = x / 2;

	if (x % 2 == 0)
	{
		for  (; y <= x; y++)
		{
			_putchar(str[y]);
		}
	}
	else
	{
		y = y + 1;
	}
	_putchar('\n');
}
