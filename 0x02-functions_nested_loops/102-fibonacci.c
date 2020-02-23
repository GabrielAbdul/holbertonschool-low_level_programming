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
	int temp;

	firstNum = 1;
	secondNum = 2;

	printf("%ld, %ld", firstNum, secondNum);

	for (count = 0; count <= 46; count++)
	{

		temp = secondNum;
		secondNum = firstNum + secondNum;
		firstNum = temp;

		if (count < 46)
			printf(", ");
		printf("%ld",  secondNum);
	}
	printf("\n");
}
