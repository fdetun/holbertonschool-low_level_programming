#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print_strings func
 * @separator: separator
 * @n: unsigned int
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *c;
va_list f1;
va_start(f1, n);
for (i = 0; i < n; i++)
{
c = va_arg(f1, char *);
if (c != NULL)
printf("%s", c);
else
printf("(nil)");
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(f1);
}
