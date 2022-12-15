#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
  * print_alphabet - function
  *
  * Description - prints alphabet
  *
  * Return: void no return type
  */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
#endif
