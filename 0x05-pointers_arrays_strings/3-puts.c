#include "holberton.h"

/**
 * _puts - functino that prints a string
 * @str: string input by a user
 * Return: (void)
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
