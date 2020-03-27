#include "holberton.h"

/**
 * get_bit - get_bit
 * @n: number
 * @index: index
 * Return: int 0 or 1 or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int a;
if (index > 32)
return (-1);
a = n >> index;
if (a & 1)
return (1);
else
return (0);
}
