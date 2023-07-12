#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_array(int *array, size_t low, size_t high);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_recursive(int *array, size_t size, int value);
int binary_search_recursive_helper(int *array, size_t size, int value, int low, int high);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int advanced_binary_helper(int *array, size_t size, int value, int low, int high);
