#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_array(int *array, size_t low, size_t high);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_recursive(int *array, size_t size, int value);
int binary_search_recursive_helper(int *array, size_t size, int value, int low, int high);
