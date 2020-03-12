#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - function that selects the correct function to perform
 * the operation asked by the user.
 *
 * @s: operater passed as an arg to program
 *
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (!(strcmp(ops[i].op, s)))
		{
			break;
		}
		i++;
	}
	return (ops[i].f);
}
