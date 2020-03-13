#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print_numbers func
 * @separator: separator
 * @n: unsigned int
 * Return: 0 Or total
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int b;
va_list f1;
va_start(f1, n);
for (i = 0; i < n; i++)
{
b = va_arg(f1, int);
printf("%d", b);
if (i < (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(f1);
}
