#include "main.h"

/**
 * *_memset - Function that fills memory with a constant byte.
 * @n: the first bytes
 * @s: the memory area
 * @b: the constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n;  x++)
	{
		s[x] = b;
	}
	return (s);
}
