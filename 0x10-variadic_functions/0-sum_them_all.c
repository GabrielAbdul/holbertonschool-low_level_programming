#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: input parameter
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list sum_list;

	va_start(sum_list, n);

	if (n)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(sum_list, int);
		}
		va_end(sum_list);
		return (sum);
	}
	va_end(sum_list);
	return (sum);
}
