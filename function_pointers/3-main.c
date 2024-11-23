#include "3-calc.h"

/**
 * main - Prints the result of an operation
 * @argc: the number of arguments
 * @argv: an array of arguments
 * Return: result, 0
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char oper;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	oper = *argv[2];

	if (oper != '+' && oper != '-' && oper != '*' && oper != '/' && oper != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((oper == '/' || oper == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(num1, num2);

	printf("%d\n", result);
	return (0);
}
