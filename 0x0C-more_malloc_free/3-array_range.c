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
int *f;
int b = 0;
int i = 0;

b = max - min + 1;
if (min > max)
return (NULL);
f = malloc(b *sizeof(int));
if (!f)
return (NULL);
while (min <= max && i < b)
{
f[i] = min;
min++;
i++;
}
return (f);
}
