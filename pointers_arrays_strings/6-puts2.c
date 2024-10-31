#include "main.h"

/**
 * puts2 - prints one another charater
 *@str: a pointor
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		x = x + 2;
		_putchar(str[x]);
	}
	_putchar('\n');
}
