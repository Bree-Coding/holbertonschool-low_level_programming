#include "main.h"

/**
 * *_strcpy - Writes a function that copies a string
 * @src: the string pointor
 * @dest: the copie varriable
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
return (dest);
}
