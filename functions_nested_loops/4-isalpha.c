#include "main.h"

/**
 * _isalpha - Check for letter in in lower and upercase.
 * @c: letter in lower or uppercase
 * Return: 1 if it is a letter or else 0
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
