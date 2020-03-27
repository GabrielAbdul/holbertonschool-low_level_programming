#include "holberton.h"
#include <stdlib.h>
/**
  * binary_to_uint - converts string of numbers
  * to unsigned int
  *
  * @b: binary string to covert
  *
  * Return: Number converted
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0;

	if (!b)
		return (0);
	while (b[len])
	{
		if (b[len] == '1' || b[len] == '0')
		{
			result <<= 1;
			if (b[len] == '1')
				result++;
		}
		else
			return (0);
		len++;
	}
	return (result);
}
