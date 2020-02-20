#include "holberton.h"
#include <stdio.h>

/**
 * *_strcmp - _strcmp  a string.
 * @s1: char to define the string
 * @s2: char to define the string
 * Return: f.
*/

char *string_toupper(char *f)
{
int i = 0;

while  (f[i] != '\0')
{
i++;
if (f[i] >= 97 && f[i] <= 122)
	f[i] = f[i] - 32;
}
return (f);
}