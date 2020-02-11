#define NEWLINE ('\n')
#include <unistd.h>
#include "holberton.h"

/**
 * main - 
 *
 * Return: 0 Sucess.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int i;
	char holberton[9] = "Holberton";
	int strLn = sizeof(holberton);

	for (i = 0; i < strLn; i++)
	{
		_putchar(holberton[i]);
	}
	_putchar(NEWLINE);
	return (0);
}
