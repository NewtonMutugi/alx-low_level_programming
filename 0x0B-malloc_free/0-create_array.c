#include "main.h"

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 *
 * @size: size of array.
 * @c: character that initializes
 *
 * Return: NULL if size is 0 or fails, pointer to the array if pass
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}