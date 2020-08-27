#include "search_algos.h"
/**
 * print - print
 * @array: array
 * @l: left
 * @r: right
 * Return: Void
*/
void print(int *array, size_t l, size_t r)
{
printf("Searching in array: ");
while (l <= r)
{
if (l == r)
{
printf("%u\n", array[l]);
}
else
printf("%u,", array[l]);
l++;
}
}

/**
 * binary_search - binary_search
 * @array: array
 * @size: size
 * @value: value
 * Return: -1 or i
*/

int binary_search(int *array, size_t size, int value)
{
size_t l = 0;
size_t r;
size_t mid = 0;

r = size - 1;
if (!array || !size)
return (-1);
while (l <= r)
{
print(array, l, r);

mid = (r + l) / 2;
if (array[mid] > value)
r = mid - 1;
else if (array[mid] < value)
l = mid + 1;
else
return (mid);
}
return (-1);
}
