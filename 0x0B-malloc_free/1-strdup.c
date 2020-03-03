#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - function that returns pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *
 * @str: input string parameter.
 *
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *originalStr;
	char *p;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	originalStr = malloc(len + 1);
	p = originalStr;

	if (p == NULL)
		return (NULL);
	while (*str)
	{
		*p++ = *str++;
	}
	*p = '\0';
	return (originalStr);
}
