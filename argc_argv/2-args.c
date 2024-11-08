#include <stdio.h>

/**
 * main - A function that prints all arguments it receives
 * @argc: the number of command line arguments and the size of the argv array
 * @argv: the array of size argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
