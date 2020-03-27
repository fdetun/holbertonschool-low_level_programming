#include "holberton.h"

/**
 * clear_bit - clear_bit
 * @n: number
 * @index: index
 * Return: int 1 or -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int a = 1;
if (index > 32)
return (-1);
else
{
a = a << index;
*n = ~a & *n;
return (1);
}
}
