#include "main.h"

/**
 * *_strchr - Function that copies memory area
 * @s: the string
 * @c: the first character
 * Return: s, NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		else
		{
			return (NULL);
		}
	}
}
