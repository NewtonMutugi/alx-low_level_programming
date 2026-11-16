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
	int mid, mid_squared;

	mid = (min + max) / 2;
	mid_squared = mid * mid;

	if (mid_squared == n)
		return (mid);
	else if (min == max)
		return (-1);
	else if (n < 0)
		return (-1);
	else if (mid_squared < n)
		return (_sqrt_finder(n, mid + 1, max));
	else
		return (_sqrt_finder(n, min, mid - 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (_sqrt_finder(n, 0, n));
}
