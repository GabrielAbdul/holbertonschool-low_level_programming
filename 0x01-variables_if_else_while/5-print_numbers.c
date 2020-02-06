#include <stdio.h>
#include <ctype.h>

/**
* main - function that prints all single digit 
* numbers of base 10 starting from 0
* Return: Always 0 Success
*/

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
