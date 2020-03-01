#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *
 *
 *
 *
 *
 */

int checker(char *argv)
{
	int i = 1;

	for (; argv[i] != '\0'; i++)
	{
		if (isdigit(argv[i]) == 1)
		{	
			return (1);
		}
	}

	return (0);
}


int main(int argc, char *argv[])
{
	int i = 0, sum = 0;

	for (; i < argc; i++)
	{
		if (checker(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
