#include "main.h"

/**
 * print_diagsums - Function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: size of the array
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int x;
	long int sump = 0;
	long int sums = 0;

	for (x = 0; x < size; x++)
	{
		sump += a[x * size + x];
	}
	for (x = 0; x < size; x++)
	{
		sums += a[x * size + (size - 1 - x)];
	}
	printf("%ld, %ld\n", sump, sums);
}
