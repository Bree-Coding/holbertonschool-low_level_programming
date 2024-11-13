#include "main.h"

/**
 * *str_concat - Function that concatenates two strings
 * given as a parameter
 * @s1: one of the strings
 * @s2: another one string
 * Return: NULL, the concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	int x = 0;
	int y = 0;
	int len1 = 0;
	int len2 = 0;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}

	while (s2[len2])
	{
		len2++;
	}

	array = malloc(sizeof(char) * (len1 + len2 + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		array[x] = s1[x];
	}
	for (y = 0; s2[y] != '\0'; y++)
	{
		array[len1 + y] = s2[y];
	}
	return (array);
}
