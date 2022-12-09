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

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
		if (c == 'z')
		{
			for (k = 'A'; k <= 'Z'; k++)
			{
				putchar(k);
				if (c == 'Z')
					putchar('\n');
			}
		}
	}
	return (0);
}
