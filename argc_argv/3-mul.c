#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints the name of the program
 * @argc: the number of command line arguments and the size of the argv array
 * @argv: the array of size argc
 * Return: 0, 1
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
