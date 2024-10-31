#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: a pointor
 */

void rev_string(char *s)
{
	int x = 0;
	int y = 0;
	int z;

	while (s[x] != '\0')
	{
		x++;
	}
	x--;

	for (y = 0; y <= x; y++)
	{
		z = s[x];
		s[x] = s[y];
		s[y] = z;
		--x;
	}
}
