#include "main.h"

/**
 * times_table - prints the nine times table.
 */

void times_table(void)
{
	int num, mul, pro;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			pro = num * mul;

			if (pro <= 9)

				_putchar(' ');

			else
				_putchar((pro / 10) + '0');
			_putchar((pro % 10) + '0');
		}
		_putchar('\n');
	}
}
