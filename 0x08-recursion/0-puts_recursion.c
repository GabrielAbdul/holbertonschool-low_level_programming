#include "holberton.h"

/**
 * _puts_recursion - function that prints a string, followed by a newline
 *
 * @s: input string to print
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		break;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
