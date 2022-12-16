#include <stdio.h>

/**
 * fizz_buzz - prints the numbers from 1 to 100, but multiples of
 * three print fizz instead of the number and multiples of 5 print
 * buzz
 *
 * Return: Always 0

 */
int fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
}
