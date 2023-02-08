#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number to test
 *
 * Return: Nothing
 *
 */

void print_binary(unsigned long int n)
{
	int i, j, k, l;
	int a[32];

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; i < 32; i++)
	{
		a[i] = 0;
	}
	for (j = 0; j < 32; j++)
	{
		if (n % 2 == 1)
		{
			a[j] = 1;
		}
		n = n / 2;
	}
	for (k = 31; k >= 0; k--)
	{
		if (a[k] == 1)
		{
			break;
		}
	}
	for (l = k; l >= 0; l--)
	{
		_putchar(a[l] + '0');
	}
}
