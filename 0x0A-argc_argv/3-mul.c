#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: command line arguements entered during runtime
 * @argc: number of arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc == 3)
	{

		i = 1;
		while (i < argc)
		{
			mul *= atoi(*(argv + i));
			i++;
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
