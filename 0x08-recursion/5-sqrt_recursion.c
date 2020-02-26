#include "holberton.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a num
 * @n: integer to find square root of
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int sqr;

	sqr = _pow(1, n);
	return (sqr);
}

/**
 * _pow - checks whether the square of a number
 * @x: will be square, incremented
 * @y: limiter
 * Return: int
 */

int _pow(int x, int y)
{
	if ((x * x) < y)
		return (_pow((x + 1), y));
	if ((x * x) == y)
		return (x);
	if ((x * x) > y)
		return (-1);

	return (x);
}
