#include "main.h"

/**
 * *_strdup - Function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the string
 * given as a parameter
 * @str: the parameter string
 * Return: NULL, the copie of the string.
 */

char *_strdup(char *str)
{
	int x = 0;
	int size = 0;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[x] != '\0')
	{
		size++;
		x++;
	}

	array = malloc(sizeof(char) * (size + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		array[x] = str[x];
	}
	return (array);
}
