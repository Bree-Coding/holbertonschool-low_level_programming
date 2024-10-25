#include "main.h"

/**
 * print_last_digit - Prints the last digit of x
 * @x: the digit
 * Return: y
 */
int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		x = x * -1;
	}
	y = x % 10;
	_putchar(y + 48);
	return (y);
}
