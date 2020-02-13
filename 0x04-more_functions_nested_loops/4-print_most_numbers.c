#include "holberton.h"
/**
* print_most_numbers - print_most_numbers
* Return: 0
*/
void print_most_numbers(void)
{
int a = 48;
while (a <= 57)
{
if (a == 50 || a == 52)
{
a = a + 1;
}
else
{
_putchar (a);
a++;
}
}
_putchar ('\n');
}
