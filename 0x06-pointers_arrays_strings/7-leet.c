#include "holberton.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string input by user
 * Return: s
 */

char *leet(char *s)
{
	int i, j;
	char alpha[11] = "aAeEoOtTlL";
	char num[11] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = num[j];
				break;
			}

		}
	}
	return (s);
}
