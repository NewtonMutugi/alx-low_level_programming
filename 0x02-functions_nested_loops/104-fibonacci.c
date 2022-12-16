#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 if success
 *
 */

int main(void)
{
	unsigned long int num1, num2, sum, i;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld, ", num1, num2);
	for (i = 0; i < 96; i++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		printf("%ld", sum);
		if (i != 95)
			printf(", ");
	}
	printf("\n");
	return (0);
}
