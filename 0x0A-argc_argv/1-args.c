#include "holberton.h"
#include <stdio.h>

/**
 * main - prints number of arguments entered
 * @argv: string array of arguments entered
 * @argc: number of arguments entered
 *
 * Return: int
 */

int main(int argc, __attribute__ ((unused))char *argv[])
{

	int counter, i = 1;

	for (; i < argc; i++)
		counter++;
	printf("%d\n", counter);
	return (0);
}
