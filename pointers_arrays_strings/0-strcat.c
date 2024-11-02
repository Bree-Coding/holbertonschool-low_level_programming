#include "main.h"

/**
 * *_strcat - Function that concatenates two strings
 * @src: the source string
 * @dest: the destination string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];

		x++;
		y++;
	}
	return (dest);
}
