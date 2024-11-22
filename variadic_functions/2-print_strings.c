#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings, followed by a new line
 * @separator: a string
 * @n: the number of argument of the string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		printf("%s", va_arg(args, char *));
		if (separator != NULL && x != (n - 1))
		{
			{
				printf("%s", separator);
			}
			va_end(args);
		}
		else if (separator == NULL)
		{
			printf("(nil)");
		}
	}
	printf("\n");
}
