#include "holberton.h"
/**
 * fde - Makes possible to evaluate from 1 to n
 * @a: int
 * @c: int
 * Return:  int.
 */

int fde(int a, int c)
{
	if (c * c == a)
		return (c);

	else if (c * c > a)
		return (-1);

	return (fde(a, c + 1));
}
/**
 * _sqrt_recursion - _sqrt_recursion of n
 * @n: int
 * Return:  int.
 */
int _sqrt_recursion(int n)
{
	return (fde(n, 1));
}
