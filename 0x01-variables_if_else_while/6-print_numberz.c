#include <stdio.h>



/**
  * main - Entry point of the program
  *
  * Description - Executes the characters program
  *
  * Return: 0 (Success)
  */

int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');

	return (0);
}
