#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the minimum number of coins
 * to make change for an ammount of money
 *
 * @argv: string array of arguments entered at runtime
 * @argc: number of command line arguemtns entered at runtime
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int intCent, coins;

	if (argc >= 3 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	intCent = (atoi(argv[1]));
	coins = 0;

	if (intCent <= 0)
		printf("0\n");
	if (intCent > 0)
	{
		while (intCent >= 25)
		{
			intCent -= 25;
			coins++;
		}
		while (intCent >= 10)
		{
			intCent -= 10;
			coins++;
		}
		while (intCent >= 5)
		{
			intCent -= 5;
			coins++;
		}
		while (intCent >= 2)
		{
			intCent -= 2;
			coins++;
		}

	}
	printf("%d\n", coins + intCent);
	return (0);
}
