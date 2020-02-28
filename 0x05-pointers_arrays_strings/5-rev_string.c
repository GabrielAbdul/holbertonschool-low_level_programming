#include "holberton.h"


/**
 * rev_string - function that reverses a string
 * @s: string input by a user
 * Return: (void)
 */

void rev_string(char *s)
{
	int i, j = 0;
	int len;
	char tmp[2048];

	len = _strlen(s) - 1;


	for (i = len; i >= 0; i--, j++)
		tmp[j] = s[i];
	for (j = 0; j <= len; j++)
		s[j] = tmp[j];
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
