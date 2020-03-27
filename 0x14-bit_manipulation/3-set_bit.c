#include "holberton.h"

/**
  * set_bit - sets bit to 0
  *
  * @n: pointer to an int
  * @index: position of the bit you want to set to 0
  *
  * Return: 1 On success
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;
	int gloves = 1 << index;

	if (index < sizeof(n) * 8)
	{
		bit = (*n >> index) & 1;
		if (bit == 0)
			*n = *n | gloves;
		return (*n);
	}
	return (-1);


}
