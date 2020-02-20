#include "holberton.h"

/**
 * _strcmp - function that compares two strings..
 * @s1: string that will get src copied to it
 * @s2: string to be copied
 * Return: Ascii value of the difference of s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0' && *s1 == *s2))
	{
		*s1++;
		*s2++;
	}

		result = (*s1 - *s2);
		if (*s1 == *s2)
			return (0);
		return (result);

}

