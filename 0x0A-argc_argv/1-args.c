#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 *
 * @argc: Number of arguments supplied
 * @argv: array of pointers to the string
 * Return: EXIT_SUCCESS if successful
 */

int main(int argc, char *argv[])
{
	int count;

	printf("This program was called with \"%s\".\n", argv[0]);

	for (count = 1; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
