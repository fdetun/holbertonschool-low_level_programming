#include "holberton.h"

/**
 * print_binary - print_binary
 * @n: number binire
 * Return: Void
*/

void print_binary(unsigned long int n)
{
unsigned long int i = 0;
unsigned long int h, a;
int j;

if (n == 0)
{
_putchar('0');
return;
}
h = n;
while (h != 0)
{
i++;
h = h >> 1;
}
i--;
j = i;
while (j >= 0)
{
a = n >> j;
if (a & 1)
_putchar('1');
else
_putchar('0');
j--;
}
}
