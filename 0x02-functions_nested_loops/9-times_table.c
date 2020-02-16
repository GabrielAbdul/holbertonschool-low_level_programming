#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: (void)
 */

void times_table(void)
{
	int first;
	int last;

	for (first = 0; first <= 9; first++)
	{
		for (last = 0; last <= 9; last++)
		{
			int result = first * last;

			if (result < 10 && last != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

			else
			{
				_putchar(result = '0');
			}

		}
		_putchar('\n');
	}
}
