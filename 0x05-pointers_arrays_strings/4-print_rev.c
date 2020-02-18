#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - print_rev of a string.
 * @s: char to define the string
*/

void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
i = i - 1;
while (s[i] > 0)
{
_putchar (s[i]);
i--;
}
_putchar ('\n');
}
