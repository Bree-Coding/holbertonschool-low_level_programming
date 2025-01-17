#include "main.h"

/**
 * print_sign - Prints the sign of number.
 * @n: is a number
 * Return: 1 or 0 or -1.
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
