#include <stdio.h>

/**
 * main - function that prints the first 50 fibonacci numbers
 * starting with 1 and 2, followed by a new line
 *
 * Return: (0)
 */

int main(void)
{
 /*  fibonacci sequence 1, 2, 3, 5, 8, 13, 21... */

	unsigned long firstNum;
	unsigned long secondNum;
	int count;
	unsigned long temp;

	firstNum = 1;
	secondNum = 2;

	printf("%ld, %ld", firstNum, secondNum);

	for (count = 0; count <= 47; count++)
	{
		temp = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = temp;
		printf(", %ld", temp);
	}
	printf("\n");

	return (0);
}
