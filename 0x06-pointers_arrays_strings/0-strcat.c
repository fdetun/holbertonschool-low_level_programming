#include "holberton.h"
#include <stdio.h>

/**
 * *_strcat - _strcat  a string.
 * @dest: char to define the string
 * @src: char to define the string
 * Return: dest.
*/

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[j] != '\0')
j++;
while (src[i] != '\0')
{
dest[j + i] = src[i];
i++;
}
return (dest);
}
