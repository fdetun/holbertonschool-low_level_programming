#include "holberton.h"
/**
 * _print_rev_recursion - check the code for Holberton School students.
 * @s: The character to print
 * Return: void.
 */

void _print_rev_recursion(char *s)
{

if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}

