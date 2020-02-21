#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: string input by user
 * Return: s
 */

char *rot13(char *s)
{
	int i, j;
	char input[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	j = 0;

	for (i = 0; s[i] != '\0'; i++, j++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
			}
		}
	}
	return (s);
}
