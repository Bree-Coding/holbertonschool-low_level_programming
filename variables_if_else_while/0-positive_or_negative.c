#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to n,
 * zero, positives negative
 * Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("is negative\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("positive\n");
	}
	return (0);
}
