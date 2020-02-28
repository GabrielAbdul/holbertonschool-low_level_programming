#include "holberton.h"

/**
 * print_square - function that draws a diagonal line on the terminals
 * @size: integer input by user
 * Return: (void)
 */

void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
		_putchar('\n');


	for (x = 0; x <= size - 1; x++)
	{

		for (y = 0; y <= size - 1; y++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}


}
