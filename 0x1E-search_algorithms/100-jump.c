#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump_search
 * @array: array
 * @size: size
 * @value: value
 * Return: -1 or i
*/

int jump_search(int *array, size_t size, int value)
{
size_t l = 0;
size_t r;
size_t a = 0;
size_t k = 0;

r = size - 1;
if (!array || !size)
return (-1);
a = (size_t) sqrt(size);
r = a;
while (l <= r)
{
printf("Value checked array[%ld] = [%u]\n", l, array[l]);
if (array[l] <= value && array[r] >= value)
{
printf("Value found between indexes [%lu] and [%lu]\n", l, r);
k = l;
while (k <= r)
{
printf("Value checked array[%ld] = [%u]\n", k, array[k]);
if (array[k] == value)
return (k);
k++;
}
return (-1);
}
else
{
r = r + a;
l = l + a;
}
if (r > size)
r = size - 1;
}
printf("Value found between indexes [%lu] and [%lu]\n", r, l);
return (-1);
}
