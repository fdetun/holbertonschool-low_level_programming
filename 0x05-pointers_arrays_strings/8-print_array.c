#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print_array  a string.
 * @a: pointer to define the string
 * @n: integer
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; ++i)
{
if (i < 4)
{
printf("%d, ", a[i]);
}
else
{
printf("%d\n", a[i]);
}
}
}
