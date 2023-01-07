#include "main.h"

/**
 * print_rev_recursion - prints a string in reverse.
 *
 * @s: string to be reversed
 *
 * Return: Always 0.
 *
 */

void print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	print_rev_recursion(s + 1);
	_putchar(*s);
}
