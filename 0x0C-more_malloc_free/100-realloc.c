#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - _realloc.
 *@ptr: unsigned int to check.
 *@old_size: unsigned int to check.
 *@new_size: unsigned int to check.
 * Return: ptr Or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

if (old_size < new_size)
{
free(ptr);
ptr = malloc(new_size);
return (ptr);
}
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
