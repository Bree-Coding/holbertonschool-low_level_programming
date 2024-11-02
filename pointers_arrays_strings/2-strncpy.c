#include "main.h"

/**
 * *_strncpy - Writes a function that copies a string
 * @src: the source string
 * @dest: the destination string
 * @n: a varriable length
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
