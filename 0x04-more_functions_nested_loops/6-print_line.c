#include "main.h"

/**
 * print_line - draw a straight line
 *
 * @n: number of times the character
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
