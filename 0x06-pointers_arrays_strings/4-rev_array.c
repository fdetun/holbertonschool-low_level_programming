#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverse_array  a string.
 * @a: char to define the string
 * @n: char to define the string
 * Return: f.
*/

void reverse_array(int *a, int n)
{
int i = 0;
int l, f;
n = n - 1;
while (i < n)
{
f = a[i];
l = a[n];
a[n] = f;
a[i] = l;
i++;
n--;
}
}
