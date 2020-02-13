#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminals
 * @n: integer input by user
 * Return: (void)
 */

void print_diagonal(int n)
{
	int count = 0;


	for (; count <= n; count++)
	{
		if ((count == n) || (n <= 0))
			_putchar('\n');

		_putchar('\\');
		_putchar('\n');
	}
}
