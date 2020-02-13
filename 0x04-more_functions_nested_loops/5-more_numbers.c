#include "holberton.h"
/**
* more_numbers - more_numbers
* Return: 0
*/
void more_numbers(void)
{
int a = 0;
int i = 0;
for (i = 0; i < 10; i++)
{
for (a = 0; a < 15; a++)
{
if (a >= 10)
{
_putchar ((a / 10) + '0');
}
_putchar(a % 10 + '0');
}
_putchar ('\n');
}
}
