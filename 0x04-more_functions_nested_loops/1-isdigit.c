#include "holberton.h"

/**
 * _isdigit - function that checks for a digit ( 0 through 9 )r
 * returns 1 if c is a digit, 0 otherwise
 * @c: integer input by user
 * Return: (int)
 *
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
