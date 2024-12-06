#include "main.h"

/**
 * puts_half - print the half of a string
 * @str : a string
 */

void puts_half(char *str)
{
	int long x = 0;
	int long y;

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
	y--;
	for (y++; y < x; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
