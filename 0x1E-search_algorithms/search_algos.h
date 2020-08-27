#ifndef Search_algorithm
#define Search_algorithm
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print(int *array, size_t l, size_t r);

#endif /* Search_algorithm */
