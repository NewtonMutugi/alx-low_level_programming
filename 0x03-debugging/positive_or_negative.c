#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints if i is positive or negative
 * @i: stores an int value
 *
 * Return: Always 0 (Success)
*/

void positive_or_negative(int i)
{
	/* my if statement */
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
