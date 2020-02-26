#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * 
 * @s: input string to find length
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	int count = 0;

	if (!(s[i]))
		return 0;
	do {
		count++;
		i++;
	} while (s[i]);

	return (count);
}
