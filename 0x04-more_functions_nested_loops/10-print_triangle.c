#include "holberton.h"
/**
* print_triangle - main print_triangle
* @size: variable to check
* Return: 0
*/
void print_triangle(int size)
{
int a = 0;
int i;
int j;
int n = 0;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
n = size - i;
for (j = 0; j < n; j++)
{
_putchar(' ');
}
a = 0;
while (a < i)
{
_putchar('#');
a++;
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
