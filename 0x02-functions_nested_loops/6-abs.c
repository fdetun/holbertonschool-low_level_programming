#include "holberton.h"
/**
 * _abs-  _abs block
 * @f: integer to check
 * Return: 0 or 1
 */

int _abs(int f)
{
if (f >= 0)
{
return (f);
}
else
{
f = -f;
return (f);
}
}
