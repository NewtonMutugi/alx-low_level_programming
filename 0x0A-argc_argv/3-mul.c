#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 *
 * @argc: Number of arguments supplied
 * @argv: array of pointers to the string
 * Return: 0 if successful, 1 if failed.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int num;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", num);
	}

	return (0);

}
