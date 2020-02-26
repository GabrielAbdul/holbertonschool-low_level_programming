#include "holberton.h"

/**
 * is_prime_number - function that returns 1 if n is a prime number
 * otherwise return 0
 *
 * @n: integer test prime
 * Return: int
 */

int is_prime_number(int n)
{
	int i = 2, flag = 0;

	for (; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (n == 1 || n < 0)
		return (0);

	if (flag == 0)
		return (1);
	else
		return (0);
}
	return (0);
}
