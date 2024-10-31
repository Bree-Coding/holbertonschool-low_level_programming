#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: the biginning of the string
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	x--;

	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
