#include "main.h"

/**
 * *_strstr - Function that locates a substring.
 * @haystack: the string
 * @needle: the substring
 * Return: neddle, '\0'
 */

char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (needle[y] == haystack[x])
			{
				return (needle);
				needle++;
			}
		}
	}
return ('\0');
}
