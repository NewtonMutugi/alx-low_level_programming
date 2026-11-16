#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the first element of the array to print
 * @low: first index to print
 * @high: last index to print
 *
 * Return: void
 */

void print_array(int *array, size_t low, size_t high)
{
	size_t i = low;

	printf("Searching in array: ");

	while (array && i <= high)
	{
		printf("%d", array[i]);

		if (i < high)
			printf(", ");

		else
			printf("\n");

		i++;
	}
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located
 * or -1 if value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid = 0;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;

		print_array(array, low, high);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;

		else
			high = mid - 1;
	}

	return (-1);
}
