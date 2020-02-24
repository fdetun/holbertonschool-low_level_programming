#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - writes the character c to stdout
 * @s: The character to print
 * @c: The character
 * Return: s or 0.
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
i++;
if (s[i] == c)
{
return (s + i);
}
}
return (0);
}
