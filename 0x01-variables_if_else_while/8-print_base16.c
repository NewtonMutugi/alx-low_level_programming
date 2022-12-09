#include <stdio.h>



/**
  * main - Entry point of the program
  *
  * Description - Executes the program
  *
  * Return: 0 (Success)
  */

int main(void)
{
	char c, k;

	for (c = '0'; c <= 'f'; c++)
	{
		putchar(c);
		if (c == '9')
		{
			for (k = 'a'; k <= 'f'; k++)
				putchar(k);
			break;
		}
	}
	putchar('\n');

	return (0);
}
