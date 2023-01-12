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
	int num;

	if (argc != 3)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}
	else
	{
		num = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", num);
	return (EXIT_SUCCESS);

}
