#include "holberton.h"

/**
 * is_palindrome - function that returns 1 if n is a palindrome
 * otherwise return 0
 *
 * @n: integer test prime
 * Return: int
 */

int is_palindrome(char *s)
{
	int j, len;
	int start, mid, end;

	len = _strlen(s);
	if (s[0] != s[len - 1])
		return 0;
	if (len % 2 == 0)
	{
		start = (len / 2) - 1;
		mid = len / 2;
		for (j = 0; s[start] == s[mid]; start--, mid++)
			if (j == len)
				return (1);
			j++;
	}
	if (len % 2 == 1)
	{
		start = 0;
		end = len - 1;
		for (j = 0; s[start] == s[end]; start++, end --)
			if (s[start] == s[end])
				return (1);
			j++;
	}
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
