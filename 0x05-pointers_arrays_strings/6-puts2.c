#include "holberton.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line.
 *
 * @str: string input by a user
 * Return: (void)
 */

void puts2(char *str)
{
	int i;
	int len = _strlen(str) - 1;


	for (i = 0; i <= len; i++)
		if (i % 2  == 0)
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
