#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: string input by user
 * Return: input string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '.')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}

