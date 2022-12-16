#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int num1, num2, sum, i;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld, ", num1, num2);
	for (w = 0; w < 48; w++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		printf("%d", sum);
		if (i != 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
