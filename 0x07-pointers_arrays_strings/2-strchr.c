#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a strings
 *
 * @c: character to locate
 * @s: input string to look for c in
 *
 * Return: pointer to dest
 */

char *_strchr(char *s, char c)
{


	while (*s != '\0')
	{

		if (*s == c)
			return (s);
		s++;
	}

	return (0);
}
