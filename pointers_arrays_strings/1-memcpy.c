#include "main.h"

/**
 * *_memcpy - Function that copies memory area
 * @n: bytes
 * @src: the source
 * @dest: the destination
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
