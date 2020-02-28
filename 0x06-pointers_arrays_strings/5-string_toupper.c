#include "holberton.h"

/**
 * string_toupper - function that turns every lowercase
 * character into an uppercase
 * @s: string input by user
 * Return: s
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}

