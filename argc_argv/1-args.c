#include <stdio.h>

/**
 * main - A function that number of arguments passed into it
 * @argc: the number of command line arguments and the size of the argv array
 * @argv: the array of size argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
