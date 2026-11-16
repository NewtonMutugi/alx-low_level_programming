#include "main.h"

/**
 * malloc_checked -  function that allocates memory using malloc
 *
 * @b: size of the memory to allocate
 *
 * Return: pointer to the allocated memory,
 * normal process termination with a status value of 98
 *
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	exit(98);
	return (p);
}
