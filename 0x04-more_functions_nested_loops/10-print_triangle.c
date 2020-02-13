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
	int a = 0, b = 0;

	if (size <= 0)
		_putchar('\n');
	

	for (rows = 0; rows <= size - 1; rows++)
	{

		for (spaces = size - cols; spaces <= size; spaces++)
		{
			_putchar(' ');
		}
		for (cols = size - spaces; cols <= size - 1; cols++)
		{
			_putchar('#');
		}	
	
	_putchar('\n');
	}

}
