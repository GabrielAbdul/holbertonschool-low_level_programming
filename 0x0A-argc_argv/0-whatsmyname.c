#incl#include "holberton.h"
#include <stdio.h>

/**
 * main - function that prints it's name out
 * @argv: string array of arguments entered at runtime
 * @argc: number of command line arguemtns entered at runtime
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
