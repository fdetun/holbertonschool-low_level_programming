#include "holberton.h"
#include <stdio.h>

/**
 * _memset - writes the character c to stdout
 * @s: The character to print
 * @b: The character
 * @n: integer to check
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
