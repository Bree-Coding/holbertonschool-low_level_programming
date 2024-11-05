#include "main.h"

/**
 * *_strstr - Function that locates a substring.
 * @haystack: the string
 * @needle: the substring
 * Return: haystack, '\0'
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int y = 0;

	while (haystack[x] != '\0')
	{
		while (haystack[x + y] == needle[y] && needle[y] != '\0')
		{
			y++;
		}
		if (needle[y] == '\0')
		{
			return (&haystack[x]);
		}
		x++;
		y = 0;
	}
	return ('\0');
}
