#include "holberton.h"

/**
 * _abs(int) - function that computes the absolute value of and integer
 * @x: integer input by user
 * Return: (void)
 */

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
}
