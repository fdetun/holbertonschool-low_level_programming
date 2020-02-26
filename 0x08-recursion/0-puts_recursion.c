#include "holberton.h"
/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: The character to print
 * Return: void.
 */

void _puts_recursion(char *s)
{
int i = 0;
i++;
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + i);
}

