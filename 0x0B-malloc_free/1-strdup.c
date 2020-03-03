#include "holberton.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 *
 */

char *_strdup(char *str)
{
	char *originalStr;
	char *p;
	int len = 0;

	while (str[len])
        	len++;

	originalStr = malloc(len + 1);
	p = originalStr;

	while (*str)
	{
		*p++ = *str++;
	}
	*p = '\0';
	return (originalStr);
}
