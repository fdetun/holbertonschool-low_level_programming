#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - check malloc.
 *@b: unsigned int to check.
 * Return: a or 98.
 */
void *malloc_checked(unsigned int b)
{
char *a;
a = malloc(b);
if (!a)
exit(98);
return (a);
}
