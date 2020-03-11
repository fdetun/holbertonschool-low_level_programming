#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - int_index func
 * @array: array
 * @size: size
 * @cmp: function
 * Return: i or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || cmp == NULL || array == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (0);
}
