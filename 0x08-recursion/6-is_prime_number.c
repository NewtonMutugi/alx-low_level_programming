#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	else
		return (is_prime_number(n - 1));
}
