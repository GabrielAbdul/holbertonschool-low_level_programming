#include "holberton.h"
#include <stdio.h>

/**
 * main - prints every argument entered followed by a new line
 * @argv: string array of command line arguments entered
 * @argc: number of arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
