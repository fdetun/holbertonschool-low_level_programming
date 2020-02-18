#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - puts2  a string.
 * @str: char to define the string
*/

void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar (str[i]);
i = i + 2;
}
_putchar ('\n');
}
