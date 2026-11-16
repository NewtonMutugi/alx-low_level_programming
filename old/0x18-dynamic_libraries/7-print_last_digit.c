#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: integer stores the number to be evaluated
 *
 * Return: value of the last digit
 *
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
