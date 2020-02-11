#include "holberton.h"

/**
 * _isalpha - returns 1 if c is a letter, lower || upper, 0 otherwise
 * @c: number input by user
 * Return: (void)
 */

int _isalpha(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else if ((c >= 'a') && (c <= 'z'))
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
