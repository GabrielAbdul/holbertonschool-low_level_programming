#include "holberton.h"

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
		_putchar(last);
		return (last);
	}
	else
	{
		_putchar(negLast);
		return (negLast);
	}
}
