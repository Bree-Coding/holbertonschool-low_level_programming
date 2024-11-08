#include "main.h"

/**
 * check_numbers - A function returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @num: an integer that equal to n
 * @x: an integer use to find the square root
 * Return: 0, 1
 */

int check_numbers(int num, int x)
{

	if (num % x == 0)
	{
		return (0);
	}
	else if ((x * x) > num)
	{
		return (1);
	}
	else
	{
		return (check_numbers(num, x + 1));
	}
}

/**
 * is_prime_number - A function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: an integer
 * Return: 0, 1
 */

int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (check_numbers(n, 2));
	}
}
