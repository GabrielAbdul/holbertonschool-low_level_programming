#include <stdio.h>
#include <ctype.h>

/**
* main - function that prints all single digit
* numbers of base 10 starting from 0 using putchar
* Return: Always 0 Success
*/

int main(void)
{
	int x = 48;

	while (x < 58)
	{
		putchar(x);
		x++;
	}
	putchar(10);
	return (0);
}
