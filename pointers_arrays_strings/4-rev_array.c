#include "main.h"

/**
 * reverse_array - function that reverses a array
 * @a: an array pointor
 * @n: number of element of the array
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int z;

	n -= 1;

	for (x = 0; x <= n; x++)
	{
		z = a[x];
		a[x] = a[n];
		a[n] = z;
		n--;
	}
}
