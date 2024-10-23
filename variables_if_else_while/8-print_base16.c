#include <stdio.h>

/**
 * main - Prints all numbers in base seexteen
 *Return: 0
*/

int main(void)
{
	char x;

	for (x = 48; x <= 102; x++)
	{
		if (x < 58 || x >= 97)
		putchar(x);
	}
	putchar('\n');
	return (0);
}
