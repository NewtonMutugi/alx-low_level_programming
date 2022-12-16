#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, k, w;

	i = 1;
	j = 2;
	printf("%d, %d, ", i, j);
	for (w = 0; w < 48; w++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%d", k);
		if (w != 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
