#include <stdio.h>

/**
 * main - write a program that prints the numbers from 1 to 100,
 * but prints 'fizzBuzz' for multiples of 3
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3  == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x == 100)
		{
			printf("Buzz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
printf("\n");
return (0);
}
