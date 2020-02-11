#include "holberton.h"

/**
 * print_last_digit - prints the last digitr of a numebr
 * @x: integer input by user
 * Return: (void)
 *
*/

int print_last_digit(int x)
{
	int x;
	int last;

	last = (x % 10);
	_putchar(last);
}
