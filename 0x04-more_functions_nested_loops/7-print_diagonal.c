#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminals
 * @n: integer input by user
 * Return: (void)
 */

void print_diagonal(int n)
{
	int count = 0;
	int spaces;

	if (n <= 0)
		_putchar('\n');
	for (; count <= n - 1; count++)
	{
		for (spaces = 0; spaces < count; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
