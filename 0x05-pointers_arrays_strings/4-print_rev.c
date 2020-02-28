#include "holberton.h"

/**
 * print_rev - function that prints a string in reverse, followed by a new line
 * _strlen - function that returns the length of the string
 * @s: string input by a user
 * Return: (void)
 */

void print_rev(char *s)
{
	int i;
	int len;



	len = _strlen(s) - 1;
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}


/**
 * _strlen - functino that returns length of a string
 * @s: string input by user
 *
 * Return: (len)
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
