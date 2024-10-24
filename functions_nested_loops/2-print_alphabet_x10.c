#include "main.h"
/**
 * print_alphabet_x10 - Function that prints the alphabet ten time,
 * Return: always 0
*/

void print_alphabet_x10(void)

{	char x;
	char i;

	for (i = 1; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{

		_putchar(x);
		}
	_putchar('\n');
	}

}
