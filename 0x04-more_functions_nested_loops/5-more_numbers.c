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
	int checker;


	while (num <= '9')
	{
		while (num <= '9')
		{
			if (checker == '1' || checker > '1')
			{
				_putchar(checker + '0');
			}
			else
			{
				checker = num / 10;
				_putchar(num + '0');
				
			}
		}
	_putchar('\n');
	}
}
