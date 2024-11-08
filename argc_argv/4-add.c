#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that adds positive numbers
 * @argc: the number of command line arguments and the size of the argv array
 * @argv: the array of size argc
 * Return: 0, 1
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int sum = 0;


	if (argc > 1)
	{
		for (x = 0; x < argc; x++)
		{
			for (y = 0; y < argv[x][y]; y++)
			{
				if (argv[x][y] < '0' || argv[x][y] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[x]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
