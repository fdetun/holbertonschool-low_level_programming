#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - writes the character c to stdout
 * @haystack: The character to print
 * @needle: The character
 * Return: i.
 */

char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0, j = 0;

while (haystack[i])
{
while (needle[j] && (haystack[i] == needle[0]))
{
if (haystack[i + j] == needle[j])
j++;
else
break;
}
if (needle[j])
{
i++;
j = 0;
}
else
return (haystack + i);
}
return (0);
}
