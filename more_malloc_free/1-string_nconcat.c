#include "main.h"

/**
 * *string_nconcat - Function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: a varriable
 * Return: array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int x = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0' && len2 < n)
	{
		len2++;
	}

	array = malloc(sizeof(char) * (len1 + len2 + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < len1; x++)
	{
		array[x] = s1[x];
	}
	for (x = 0;  x < len2; x++)
	{
		array[len1 + x] = s2[x];
	}
	array[len1 + len2] = '\0';
	return (array);
}
