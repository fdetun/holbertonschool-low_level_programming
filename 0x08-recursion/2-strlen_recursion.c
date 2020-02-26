#include "holberton.h"
/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: The character to print
 * Return: i or 0.
 */

int _strlen_recursion(char *s)
{
int i = 0;

if (*s == '\0')
{
return (0);
}
i++;
return (i + _strlen_recursion(s + i));
}
