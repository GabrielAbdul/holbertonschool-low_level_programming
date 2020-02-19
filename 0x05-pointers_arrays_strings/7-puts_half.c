#include "holberton.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: string input by a user
 * Return: (void)
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str) - 1;

	for (i = (len + 1) / 2; i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');


}

/**
 * _strlen - function that returns length of a string
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
