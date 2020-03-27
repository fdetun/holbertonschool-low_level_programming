#include "holberton.h"

/**
 * set_bit - set_bit
 * @n: number
 * @index: index
 * Return: int 1 or -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int a = 1;
if (index > 32)
return (-1);
else
{
a = a << index;
*n = a | *n;
return (1);
}
}
