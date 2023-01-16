#include "main.h"

/**
 * _sqrt_finder - Does the recurssion bit
 * @n: number
 * @min: minimum number
 * @max: maximum number
 *
 * Return: Square root of @n or -1
 */

int _sqrt_finder(int n, int min, int max)
{
	int mid = (min + max) / 2;

	if (min > max)
		return (-1);
	if (mid * mid == n)
		return (mid);
	if (mid * mid > n)
		return (_sqrt_finder(n, min, mid - 1));
	return (_sqrt_finder(n, mid + 1, max));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}else if (n == 1)
	{
		return (1);
	}

	return (_sqrt_finder(n, 0, n));
}
