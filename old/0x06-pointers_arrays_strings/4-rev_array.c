#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers.
  *
  * @a: pointer for integer array
  * @n: number of elements of the array
  *
  * Return: Nothing
  */

void reverse_array(int *a, int n)
{
	int i;
	int *j = malloc(n * sizeof(int));
	int count = 0;



	for (i = n - 1; i >= 0; i--)
	{
		j[count] = a[i];
		count++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = j[i];
	}

}
/*if (j == NULL || a == NULL)
	{
		printf("Memory not allocated.\n");
		exit(0);
	}*/
