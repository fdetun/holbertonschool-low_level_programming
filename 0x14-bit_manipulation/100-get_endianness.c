#include "holberton.h"

/**
 * get_endianness - get_endianness
 * Return: int 1 or 0
*/

int get_endianness(void)
{
int f = 1;
char *c;

c = (char *)&f;
if (*c)
return (1);
else
return (0);
}
