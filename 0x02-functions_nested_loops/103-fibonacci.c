#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, for even terms
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int num1, num2, sum;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld, ", num1, num2);

	while (1)
	{
		sum = num1 + num2;

		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
			printf("%ld, ", sum);

		num1 = num2;
		num2 = sum;
	}

	printf("\n");
	return (0);
}
