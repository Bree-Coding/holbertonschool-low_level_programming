#include "main.h"

/**
 * *_strncat - Function that concatenates two strings
 * @src: the source string
 * @dest: the destination string
 * @n: a varriable lentgh
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];

		x++;
		y++;
	}
	return (dest);
}
