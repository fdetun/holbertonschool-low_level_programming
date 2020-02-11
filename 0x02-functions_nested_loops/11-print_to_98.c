#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - check the code for print_to_98.
 * @n: integer param
 *
 */
void print_to_98(int n)
{
while (n != 98)
{
if (n < 98)
{
printf("%d, ", n);
n++;
}
else if (n > 98)
{
printf("%d, ", n);
n--;
}
}
printf("%d\n", n);
}
