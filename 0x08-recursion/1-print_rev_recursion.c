#include "holberton.h"

/**
 * _print_rev_recursion - function that prints a string in revers
 * 
 * @s: input string to print
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i;

	while (s[i])
		i++;

	for (; i >= 0; i--)
		_putchar(s[i]);
}
