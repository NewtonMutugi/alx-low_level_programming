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
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
