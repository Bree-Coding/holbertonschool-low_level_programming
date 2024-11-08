#include <stdio.h>

/**
 * main - A function that prints the name of the program
 * @argc: the number of command line arguments and the size of the argv array
 * @argv: the array of size argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

return (0);
}
