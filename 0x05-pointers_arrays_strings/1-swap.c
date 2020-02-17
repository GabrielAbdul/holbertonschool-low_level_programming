#include "holberton.h"

/*
 * reset_to_98 - functino that takes a pointer to an int
 * as a parameter and updates the value it points to to 98
 *
 * Return: (void)
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
