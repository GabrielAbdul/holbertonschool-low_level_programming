#include "holberton.h"
#include <unistd.h>

/**
 * rev_string - function that reverses a string
 * @s: string input by a user
 * Return: (void)
 */

void rev_string(char *s)
{
	int i, j;
	int len;
	int tmp[1000];

	len = _strlen(s) - 1;

	for (i = len; i >= 0; i--, j++)
	{
		tmp[i] = s[j];
	}
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
