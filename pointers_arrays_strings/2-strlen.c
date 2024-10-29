#include "main.h"

/**
 * _strlen - write the size of a string
 * @s: the size
 * Return: lenth
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
