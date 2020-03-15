#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print_all
 * @format: format
 * return: void
 */
void print_all(const char * const format, ...)
{
va_list f1;
int i = 0;
int ii, b;
char *s;

va_start(f1, format);
while (format[i] != '\0' && format != NULL)
{
b = 0;
switch (format[i])
{
case 99:
printf("%c", va_arg(f1, int));
b = 1;
break;
case 105:
ii = va_arg(f1, int);
printf("%d", ii);
b = 1;
break;
case 115:
b = 1;
s = va_arg(f1, char*);
if (s == NULL)
{
printf("(nil)");
break;
}
printf("%s", s);
break;
case 102:
printf("%f", va_arg(f1, double));
b = 1;
break;
}
if (b == 1 && format[i + 1])
printf(", ");
i++;
}
va_end(f1);
printf("\n");
}
