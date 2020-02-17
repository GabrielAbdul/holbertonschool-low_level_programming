#include "holberton.h"

/*
 * _puts - functino that prints a string
 *@*s: character input by a user
 * Return: (void)
 */

void print_rev(char *s)
{
	int i;

	for (i = '\0'; i >= s[0] ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
