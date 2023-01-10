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

	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
