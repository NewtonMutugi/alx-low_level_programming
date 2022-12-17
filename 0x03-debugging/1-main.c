#include <stdio.h>

/**
 * main - causes infinite loop
 *
 * Return: 0
 *
 */

int main(void)
{
	int i = 0;

	printf("Infinite loop incoming :(");

	while (i < 10)
	{
		i++;
	}
	printf("\nInfinite loop avoided! \\o/\n");


	return (0);
}
