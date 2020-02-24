#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - writes the character c to stdout
 * @dest: The character to print
 * @src: The character
 * @n: integer to check
 * Return: s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
