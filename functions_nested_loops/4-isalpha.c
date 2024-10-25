#include "main.h"

/**
 * _isalpha - Check for c in in lower and upercase.
 * @c: letter c in lower or uppercase
 * Return: 0
 */

int _isalpha(int c)
{

	if ((c <= 65 && c >= 90) || (c <= 97 && c >= 122))
	{
		return (1);
	}
	return (0);
}
