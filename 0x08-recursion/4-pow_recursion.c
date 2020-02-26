#include "holberton.h"
/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: The int to check
 * @y: The int to check
 * Return: int.
 */

int _pow_recursion(int x, int y)
{

if (y == 0)
{
return (1);
}
if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x, y - 1));
}
