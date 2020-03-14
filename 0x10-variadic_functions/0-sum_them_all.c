#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum_them_all func
 * @n: unsigned int
 * Return: 0 Or total
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int total = 0;
unsigned int i;
if (n == 0)
{
return (0);
}
va_list f1;
va_start(f1, n);
for (i = 0; i < n; ++i)
{
total = total + va_arg(f1, unsigned int);
}
va_end(f1);
return (total);
}
