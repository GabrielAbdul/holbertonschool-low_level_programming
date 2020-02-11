#include "holberton.h"

/**
 * print_sign - returns 1, 0, or -1 depending if n is >, <, or = 0
 * 
 * @n: number input by user
 * 
 * Return: (void)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
