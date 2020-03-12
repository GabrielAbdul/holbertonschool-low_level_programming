#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - calculates basic arithmetic between 2 integers
 *
 * @argc: arg count
 * @argv: string array of args
 *
 * Return: a 'op' b
 */


int main(int argc, char *argv[])
{
	int (*op)(int, int) = get_op_func(argv[2]);
	char sign = argv[2][0];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (sign == '/' || sign == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
