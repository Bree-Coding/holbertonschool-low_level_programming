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
	if (x % 2 == 0)
	{
		y = x / 2;
	}
	else
	{
		y = (x + 1) / 2;
	}
	for (y++; y < x; y++)
	{
		_putchar(str[y - 1]);
	}
	_putchar('\n');
}
