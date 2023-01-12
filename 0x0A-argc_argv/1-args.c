#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 *
 * @argc: Number of arguments supplied
 * @argv: array of pointers to the string
 * Return: EXIT_SUCCESS if successful
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i, num;

	for (i = 0; i < argc; i++)
		num = i;
	printf("%d\n", num);
	return (0);

}
