#include "holberton.h"

/**
 * _pow_recursion - function that returns the value of x rasied to pow of y
 * 
 * @x: input integer going to be raised by y
 * @y: input integer to raise x by
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return -1;
	if (y == 0)
		return 1;
	x *=  _pow_recursion(x, y - 1);
	return (x);
}
