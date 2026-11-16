#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * isNumber - checks the if a string is a number
 * @number: the string
 * Return: 0 if the string is a number, 1 if not
 *
 */

int isNumber(char number[])
{
	int i, len = strlen(number);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(number[i]))
			return (1);
	}
	return (0);
}


/**
 * main - Entry point of program
 *
 * @argc: Number of arguments supplied
 * @argv: array of pointers to the string
 * Return: 0 if successful, 1 if failed.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isNumber(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);

}
