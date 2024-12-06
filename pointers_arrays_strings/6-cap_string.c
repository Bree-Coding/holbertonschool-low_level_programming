#include "main.h"

/**
 * *cap_string - Function that capitalizes all words of a string
 * @s: length of the array
 * Return: s
 */

char *cap_string(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			if (s[x - 1] == ' ' ||
				s[x - 1] == '\t' ||
				s[x - 1] == '\n' ||
				s[x - 1] == ',' ||
				s[x - 1] == ';' ||
				s[x - 1] == '.' ||
				s[x - 1] == '!' ||
				s[x - 1] == '?' ||
				s[x - 1] == '"' ||
				s[x - 1] == '(' ||
				s[x - 1] == ')' ||
				s[x - 1] == '{' ||
				s[x - 1] == '}')
			{
				s[x] -= 32;
			}
		}
	return (s);
}
