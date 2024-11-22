#include "variadic_functions.h"

/**
 * sum_them_all - Fuction that returns the sum of all its parameters
 * @n: the number of arguments
 * Return: 0, sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list args;

		if (n != 0)
		{
			va_start(args, n);
			for (x = 0; x < n; x++)
			{
				sum += va_arg(args, int);
			}
			va_end(args);
			return (sum);

		}
	return (0);
}
