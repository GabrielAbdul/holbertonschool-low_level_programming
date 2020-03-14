#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 *
 * @separator:string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings_list;
	unsigned int i;

	va_start(strings_list, n);

	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			/* if (va_arg(strings_list, char*) == NULL)
				printf("(nil)%s", separator); */
			if (i == n - 1)
			{
				printf("%s", va_arg(strings_list, char*));
				break;
			}

			printf("%s%s", va_arg(strings_list, char*), separator);
		}
	printf("\n");
	}
	if (!separator)
	{
		for (i = 0; i < n; i++)
		{
			/* if (va_arg(strings_list, char*) == NULL)
				printf("(nil)"); */
			printf("%s", va_arg(strings_list, char*));
		}
		printf("\n");
	}

	va_end(strings_list);
}
