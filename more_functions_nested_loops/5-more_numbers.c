#include "main.h"

/**
 * more_numbers - Prints 10 times numbers from 0 to 14
 */

void more_numbers(void)
{
	int n;
	int x;

	n = 0;
	for (n = 0; n < 10; n++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{	_putchar((x / 10) + '0'); }
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}

}
