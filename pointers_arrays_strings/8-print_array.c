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

	while (y < n)
	{
	printf("%d, ", a[y]);
	y++;
	}
	printf("\n");
}
