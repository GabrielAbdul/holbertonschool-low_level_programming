#include "holberton.h"

/**
 * is_palindrome - function that returns 1 if n is a palindrome
 * otherwise return 0
 *
 * @s: input string
 * Return: int
 */

int is_palindrome(char *s)
{
	int len;
	int i = 1;

	len = _strlen(s);

	if (*s != s[len - 1])
		return (0);
	if (*s == s[len - i--])
		is_palindrome(*(s + i));

	return (1);
}



/**
 * _strlen - function that returs the length of a string
 *@s: string input by a user
 * Return: (void)
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}

