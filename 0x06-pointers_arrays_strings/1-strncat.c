#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - _strncat  a string.
 * @dest: char to define the string
 * @src: char to define the string
 * @n: integer to check
 * Return: dest.
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[j] != '\0')
j++;
for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[j + i] = src[i];
return (dest);
}
