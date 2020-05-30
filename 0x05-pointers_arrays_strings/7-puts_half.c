#include "holberton.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: string input by a user
 * Return: (void)
 */

void puts_half(char *str)
{
	int starting_index, tmp;
	int len = _strlen(str) - 1;

	if (len % 2 == 0)
		starting_index = len / 2;
	else if (len % 2 == 1)
	{
		tmp = (len - 1) / 2;
		starting_index = len - tmp;
	}
	while (starting_index < len)
	{
		_putchar(str[starting_index]);
		starting_index++;
	}
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
