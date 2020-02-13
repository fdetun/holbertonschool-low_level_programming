#include "holberton.h"
/**
* print_square - print_square
* @n: variable to check
* Return: 0
*/
void print_square(int n)
{
int a;
int b;

if (n <= 0)
{
_putchar ('\n');
}
else
{
for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
_putchar(35);
_putchar ('\n');
}
}
}
