#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed by a new line
 * @separator: a string
 * @n: the number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list args;
	unsigned int x;

	va_start(args, n);

	if (separator != NULL)
	{
		for (x = 0; x < n; x++)
		{
			printf("%d", va_arg(args, int));
			if (x != (n - 1))
			{
				printf("%s", separator);
			}
			va_end(args);
		}
		printf("\n");
	}
}
