#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - writes the character c to stdout
 * @s: The character to print
 * @accept: The character
 * Return: i.
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j;
while (s[i] != '\0')
{
i++;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
