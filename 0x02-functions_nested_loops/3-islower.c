#include "holberton.h"

/**
* _islower - returns 1 if c is lowercase, else 0
* 
* Return: (void)
*/

int _islower(int c)
{
	if (c <= 'z'&& c >= 'a')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
