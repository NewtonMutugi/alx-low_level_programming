#include "main.h"

/**
  * print_to_98 - prints natural numbers
  *
  * @n: stores the number less than 98
  *
  * Return: Nothing
  */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; n > 98; --i)
			printf("%d ", i);
	}
	else
	{
		for (i = n; n < 98; ++i)
			printf("%d ", i);
	}
}