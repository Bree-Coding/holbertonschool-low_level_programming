#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: a pointor
 * @n: numbers of array
 */

void print_array(int *a, int n)
{
	int y = 0;

	for (y = 0; y < n; y++)
	{
		if (y == (n - 1))
		{
			printf("%d", a[y]);
		}
		else
		{
			printf("%d, ", a[y]);
		}
	}
	printf("\n");
}
