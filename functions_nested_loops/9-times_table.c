#include "main.h"

/**
 * times_table - prints the nine times table
 */

void times_table(void)
{
	int x;
	int y;
	int r;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)

		{
			r = x * y;

			if (r < 10)
				{
				_putchar(' ');
				_putchar(' ');
				_putchar((r % 10) + '0');
				_putchar(',');
				}
			else
				{
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				_putchar(',');
				}
		if (y == 9)
			{
			_putchar('\n');
			}
		}
	}
}
