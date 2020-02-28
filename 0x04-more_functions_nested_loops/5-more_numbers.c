#include "holberton.h"

/**
 * more_numbers - function that prints 10 times
 * the numbers from 0 to 14 followed by a newlines
 *
 * Return: (void)
 */

void more_numbers(void)
{
	int num = 0;
	int num2 = 0;
	int checker;

	for (num = 0; num <= 9; num++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			checker = num2 / 10;
			if (checker >= 1)
			{
				_putchar(checker + '0');
			}
			_putchar((num2 % 10) + '0');

		}
		_putchar('\n');
	}



}
