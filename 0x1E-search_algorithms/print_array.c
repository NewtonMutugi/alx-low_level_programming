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
