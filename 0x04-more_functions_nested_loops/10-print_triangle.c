#include "holberton.h"

/**
 * print_triangle - function that draws a diagonal line on the terminals
 * @n: integer input by user
 * Return: (void)
 */

void print_triangle(int size)
{
	int rows;
	int cols;
	int spaces;

	if (size <= 0)
		_putchar('\n');
	for (rows = 0; rows < size; rows++)
	{
		for (spaces = size - rows; spaces > 1; spaces--)
			_putchar(' ');
		for (cols = 0; cols <= rows; cols++)
			_putchar('#');
	_putchar('\n');
	}
}
