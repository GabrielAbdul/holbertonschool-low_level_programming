#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number
 * 
 * @n: input integer to find factorial of
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return -1;
	if (n == 0 || n == 1)
		return 1;

	n = n * factorial(n - 1);

	return n;
}
