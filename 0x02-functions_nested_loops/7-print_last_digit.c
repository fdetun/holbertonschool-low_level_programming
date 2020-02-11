#include "holberton.h"

/**
 * print_last_digit - prints last digit of integer input
 * @n: integer to modify
 *
 * Return: l
 */


int print_last_digit(int n)
{
int f;
int a;
f = n % 10;
if (f < 0)
{
f = -f;
}
a = '0' + f;
_putchar(a);
return (f);
}
