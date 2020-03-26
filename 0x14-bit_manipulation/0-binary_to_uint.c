#include "holberton.h"

/**
 * binary_to_uint - binary_to_uint
 * @b: number binire
 * Return: f
*/


unsigned int binary_to_uint(const char *b)
{
int i = 0, m = 1, f = 0;

if (b == NULL)
return (0);
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
return (0);
i++;
}
while (i > 0)
{
if (b[i - 1] == '1')
f = f + m;
m = m * 2;
i--;
}
return (f);
}
