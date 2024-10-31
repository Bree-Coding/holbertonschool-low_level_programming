#include "main.h"

/**
 * puts2 - prints one another charater
 *@str: a pointor
 */

void puts2(char *str)
{
	int x = 0;
	int y;

	while (str[x] != '\0')
	{
		x++;
	}
	x--;

	for (y = 0; y <= x; y = y + 2)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
