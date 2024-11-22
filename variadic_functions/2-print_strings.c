#include "varidic_fuction.h"

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

	for (x = 0, x < n; x++)
	{
	if (separator != NULL && x != (n - 1))
	{
		{
			printf("%s", va_args, char);
		}
		printf("\n");
		va_end(args);
	else
	{
		printf("(nil)");
	}
}
