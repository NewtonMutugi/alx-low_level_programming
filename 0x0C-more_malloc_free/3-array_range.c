#include "main.h"

/**
 * array_range - function that creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: NULL if min > max or malloc fails, the pointer to the
 * newly created array
 *
 */

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = min + i;
	return (p);
}
