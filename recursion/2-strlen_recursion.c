#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: a string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
