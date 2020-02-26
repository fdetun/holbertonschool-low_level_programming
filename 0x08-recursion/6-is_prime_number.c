#include "holberton.h"
/**
 * tun - tun
 * @a: int
 * @b: int
 * Return:  int.
 */
int tun(int a, int b)
{
if (a == b)
return (1);
else if (a % b == 0)
return (0);
return (tun(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: int
 * Return:  int.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (tun(n, 2));
}
