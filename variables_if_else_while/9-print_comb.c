#include <stdio.h>

/**
 * main - Prints all combinations of single-digit numbers.
 * Return: 0
 */

int main(void)
{

	char x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
