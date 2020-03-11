#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - array_iterator
 * @array: array
 * @size: size
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
int b = size;
for (i = 0; i < b; i++)
{
action(array[i]);
}
}
