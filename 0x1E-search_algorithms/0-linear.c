#include "search_algos.h"


/**
 * linear_search - linear_search
 * @array: array
 * @size: size
 * @value: value
 * Return: -1 or i
*/

int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (!array)
return (-1);
while (i < size)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
i++;
}
return (-1);
}
