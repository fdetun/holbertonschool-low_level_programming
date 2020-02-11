#include "holberton.h"
/**
 *times_table - prints the_times_table
 *
 *
 *
 */
void times_table(void)
{
int a, b, c;
for (a = 0 ; a <= 9 ; ++a)
{
for (b = 0 ; b <= 9 ; ++b)
{
c = b * a;
if (c >= 10)
{
_putchar(' ');
_putchar(c / 10 + '0');
_putchar(c % 10 + '0');
}
else
{
if (b != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(c + '0');
}
if (b != 9)
_putchar(',');
if (b == 9)
{
_putchar('\n');
}
}
}
}
