#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: a string pointor
 * @accept: another string pointor
 * Return: r
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	int r = 0;

	for (x = 0; s[x] != '\0' && s[x] != 32; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				r++;
				break;
			}
		}

	}
	return (r);
}
