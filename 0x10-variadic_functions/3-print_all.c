#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

void print_char(va_list arg_list);
void print_integer(va_list arg_list);
void print_float(va_list arg_list);
void print_string(va_list arg_list);

/**
 * print_char - function that prints a character
 *
 * @arg_list - arguments to print
 * Return: void
 */

void print_char(va_list arg_list)
{
	printf("%c", va_arg(arg_list, int));
}



/**
 * print_integer - function that prints a character
 *
 * @arg_list - arguments to print
 * Return: void
 */

void print_integer(va_list arg_list)
{
	printf("%i", va_arg(arg_list, int));
}



/**
 * print_float - function that prints a character
 *
 * @arg_list - arguments to print
 * Return: void
 */

void print_float(va_list arg_list)
{
	printf("%d", va_arg(arg_list, int));
}



/**
 * print_string - function that prints a character
 *
 * @arg_list - arguments to print
 * Return: void
 */

void print_string(va_list arg_list)
{
	printf("%s", va_arg(arg_list, char*));
}



/**
 * print_all = function that prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list arg_list;
	unsigned int i, j, nextChar;
	char *comma = ", ";

	formats types[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};


	va_start(arg_list, format);

	i = 0;
	nextChar = i + 1;
	while (format[i])
	{
		j = 0;
		while (types[j].c)
		{
			if(*(types[j].c) == format[i])
			{
				types[j].fp(arg_list);
				if (format[nextChar] != '\0')
				{
					printf("%s", comma);
				}
			}
		j++;
		}
	i++;
	}

	va_end(arg_list);
	printf("\n");

}
