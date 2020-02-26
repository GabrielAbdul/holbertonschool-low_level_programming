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

	if (*s == '\0')
		_putchar('\n');
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);

}
