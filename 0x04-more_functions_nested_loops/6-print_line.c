#include "holberton.h"
/**
* print_line - print_line
* @n: variable to check
* Return: 0
*/
void print_line(int n)
{
int a;

if (n <= 0)
{
_putchar ('\n');
}
else
{
for (a = 0; a < n; ++a)
{
_putchar (95);
}
_putchar ('\n');
}
}
