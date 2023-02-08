#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i = 0, j = 0;
	unsigned long int k = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		k = n & 1;
		if (k == 1)
			j = 1;
		if (j == 1)
			_putchar(k + '0');
		n = n >> 1;
		i++;
	}
}
