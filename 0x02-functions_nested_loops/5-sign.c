#include "holberton.h"
/**
 * print_sign-  print_sign block
 * @n: integer to check
 * Return: 0 or 1 or -1
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
