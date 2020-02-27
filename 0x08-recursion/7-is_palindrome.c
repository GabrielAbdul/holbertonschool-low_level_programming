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



#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: input string to find length
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
