#include "main.h"

/**
  * print_alphabet_x10 - defines the prototype in mains.h
  *
  * Description - prints alphabet 10 times
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
