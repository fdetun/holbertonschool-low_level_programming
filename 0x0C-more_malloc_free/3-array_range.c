#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - array_range.
 *@min: unsigned int to check.
 *@max: unsigned int to check.
 * Return: a Or NULL.
 */

int *array_range(int min, int max)
{
int *a;
int i = 0;
int b = 0;
b = max - min + 1;
if (min > max)
return (NULL);
a = malloc(b *sizeof(int));
if (!a)
return (NULL);
while (i <= max)
{
a[i] = i;
i++;
}
return (a);
}
