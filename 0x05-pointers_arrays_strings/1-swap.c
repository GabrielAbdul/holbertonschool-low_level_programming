#include "holberton.h"

/**
 * swap_int - function that swaps the value of two integers
 * as a parameter and updates the value it points to to 98
 * @a: first integer input by user to be switched
 * @b: second integer input by user to be switched
 *
 * Return: (void)
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
