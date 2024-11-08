#include "main.h"

/**
 * square_root - A function returns the natural square root of a number
 * @num: an integer that equal to n
 * @x: an integer use to find the square root
 * Return: -1, x
 */

int square_root(int num, int x)
{

	if ((x * x) > num)
	{
		return (-1);
	}
	else if ((x * x) == num)
	{
		return (x);
	}
	else
	{
		return (square_root(num, x + 1));
	}
}

/**
 * _sqrt_recursion - A function that returns the natural square root
 * of a number
 * @n: an integer
 * Return: -1, n
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{	return (n);
	}
	else
	{
		return (square_root(n, 0));
	}
}
