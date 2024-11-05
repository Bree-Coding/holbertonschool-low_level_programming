#include "main.h"

/**
 * *_strpbrk - Function that searches a string for any of a set of bytes
 * @s : a string
 * @accept: another string
 * Return: s, '\0'
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return ('\0');
}
