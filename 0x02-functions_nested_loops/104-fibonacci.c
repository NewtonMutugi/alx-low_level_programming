#include <stdio.h>

/**
 * length_of_number - returns the length of a number
 *
 * @n: number to be checked
 *
 * Return: length of number
 */


int length_of_number(int n)
{
	int length = 0;

	while (n != 0)
	{
		n /= 10;
		++length;
	}
	return (length);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2
 * 		followed by a new line
 *
 * Return: 0 if success
 *
 */

int main(void)
{
	int i, length;
	long int num1, num2, sum;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld, ", num1, num2);
	for (i = 0; i < 96; i++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		length = length_of_number(sum);
		if (length == 1)
			printf(" ");
		printf("%ld", sum);
		if (i != 95)
			printf(", ");
	}
	printf("\n");
	return (0);
}
