#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located
 * or -1 if value is not present in array or if array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (array[high] != array[low])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
			     (value - array[low]));

		if (pos > size - 1)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			return (-1);
		}

		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	if (array[low] == value)
		return (low);

	printf("Value checked array[%d] is out of range\n", (int)low);
	return (-1);
}
