#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the functino
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums_list;
	unsigned int i;

	va_start(nums_list, n);

	if (separator)
	{
		for (i = 0; i < n; i++)
		{	
			if (i == n - 1)
			{
				printf("%d", va_arg(nums_list, int));
				break;
			}
		
			printf("%d%s", va_arg(nums_list, int), separator);
		}
	printf("\n");
	}
	if (!separator)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nums_list, int));
		}
		printf("\n");
	}

	va_end(nums_list);
}
