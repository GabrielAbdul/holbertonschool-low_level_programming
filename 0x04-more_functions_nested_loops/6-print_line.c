#include "holberton.h"

/**
 * print_line - function that draws a straight line in the terminals
 * @n: integer input by user
 * Return: (void)
 */

void print_line(int n)
{
	int count = 0;


	for (; count <= n; count++)
		_putchar('_');

	_putchar('\n');
}
