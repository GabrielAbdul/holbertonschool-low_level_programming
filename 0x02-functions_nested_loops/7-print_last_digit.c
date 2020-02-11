#include "holberton.h"
#define ZERO 48

/**
 * print_last_digit - prints the last digitr of a numebr
 * @x: integer input by user
 * Return: (void)
 *
*/

int print_last_digit(int x)
{
	int last;
	int negLast;

	last = (x % 10);
	negLast = -last;
	if (x > 0)
	{
		_putchar(last + ZERO);
		return (last);
	}
	else
	{
		_putchar(negLast + ZERO);
		return (negLast);
	}
}
