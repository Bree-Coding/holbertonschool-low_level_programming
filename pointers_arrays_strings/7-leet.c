#include "main.h"

/**
 * *leet - Function that encodes a string into 1337
 * @s: a string
 * Return: s
 */

char *leet(char *s)
{
	int x;
	int y;
	char s1[] = "aAeEoOtTlT";
	char s2[] = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
		for (y = 0; y < 10; y++)
		{
			if (s[x] == s1[y])
			{
				s[x] = s2[y];
			}
		}
	return (s);
}
