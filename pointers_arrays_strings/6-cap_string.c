#include "main.h"

/**
 * *cap_string - Function that capitalizes all words of a string
 * @s: length of the array
 * Return: s
 */

char *cap_string(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	if (s[x] == ' ' || s[x] == '\t' || s[x] == '\n' || s[x] == ','
			|| s[x] == ';' || s[x] == '.' || s[x] == '!' || s[x] == '?'
			|| s[x] == '"' || s[x] == '(' || s[x] == ')' || s[x] == '{'
			|| s[x] == '}')
	{
		s[x] -= 32;
		x++;
	}
	return (s);
}
