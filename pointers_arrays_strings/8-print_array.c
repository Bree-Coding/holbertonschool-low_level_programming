#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: a pointor
 * @n: numbers of array
 */

void print_array(int *a, int n)
{
	n = 0;

	while (a[n] != '\0')
	{
	printf("%d, ", a[n]);
	n++;
	}
	printf("\n");
}
