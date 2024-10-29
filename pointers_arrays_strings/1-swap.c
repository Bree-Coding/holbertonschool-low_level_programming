#include "main.h"

/**
 * swap_int - swap two integer
 * @a: an integer
 * @b: another integer
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
