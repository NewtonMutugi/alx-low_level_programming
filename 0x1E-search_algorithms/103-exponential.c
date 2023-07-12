#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located
 * or -1 if value is not present in array or if array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, j, jump;

	if (!array)
		return (-1);

	for (i = 1; i < size && array[i] <= value; i *= 2)
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);

	jump = i / 2;
	if (i >= size)
		jump = size - 1;

	printf("Value found between indexes [%d] and [%d]\n",
	       (int)(i / 2), (int)jump);

	for (j = i / 2; j <= jump; j++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
