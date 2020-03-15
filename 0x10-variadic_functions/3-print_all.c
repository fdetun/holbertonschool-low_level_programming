#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * fde - fde
 * @f1: f1
 */
void fde(va_list f1)
{
char *s;

s = va_arg(f1, char *);
if (s == NULL)
{
printf("(nil)");
return;
}
printf("%s", s);
}
/**
 * print_all - print_all
 * @format: format
 * return: void
 */
void print_all(const char * const format, ...)
{
va_list f1;
int i = 0;
int b;

va_start(f1, format);
while (format == NULL)
{
printf("\n");
return;
}
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
printf("%d", va_arg(f1, int));
b = 1;
break;
case 115:
b = 1;
fde(f1);
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
