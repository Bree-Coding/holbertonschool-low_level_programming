#include "main.h"

/**
 * *_strcpy - Writes a function that copies a string
 * @src: the string pointor
 * @dest: the copie varriable
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
return (dest);
}
