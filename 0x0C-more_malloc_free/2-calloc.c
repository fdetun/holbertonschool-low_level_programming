#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - _calloc.
 *@nmemb: unsigned int to check.
 *@size: unsigned int to check.
 * Return: a Or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int i = 0;
unsigned int j = 0;
j = nmemb * size;
if (nmemb == 0)
return (NULL);
if (size == 0)
return (NULL);
a = malloc(sizeof(unsigned int) * j);
if (!a)
return (NULL);
while (i < j)
{
a[i] = 0;
i++;
}
return (a);
}
