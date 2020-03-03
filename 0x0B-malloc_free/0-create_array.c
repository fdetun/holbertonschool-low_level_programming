#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create_array.
 * @size: variable
 * @c: variable
 * Return: 0 or 1
*/
char *create_array(unsigned int size, char c)
{
char *a;

if (size == 0)
{
return (NULL);
}
a = malloc(size * sizeof(char));
if (a == NULL)
{
return (NULL);
}
for (unsigned int i = 0; i < size; ++i)
{
a[i] = c;
}
return (a);
}
