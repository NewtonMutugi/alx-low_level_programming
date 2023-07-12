#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located
 * or -1 if value is not present in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, j, jump;

	if (!array)
		return (-1);

	jump = sqrt(size);

	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
			       (int)(i - jump), (int)i);
			for (j = i - jump; j <= i; j++)
			{
				if (array[j] == value)
					return (j);
				printf("Value checked array[%d] = [%d]\n",
				       (int)j, array[j]);
			}
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
	}
	printf("Value found between indexes [%d] and [%d]\n",
	       (int)(i - jump), (int)i);
	for (j = i - jump; j < size; j++)
	{
		if (array[j] == value)
			return (j);
		printf("Value checked array[%d] = [%d]\n", (int)j, array[j]);
	}
	return (-1);
}
