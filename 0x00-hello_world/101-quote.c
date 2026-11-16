#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char words[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19";
	int i = 0;

	while (i != '\0')
	{
		putchar(words[i]);
		i++;
	}
	return (1);
}
