#include "holberton.h"
#include <stdio.h>

/**
 * *cap_string - cap_string  a string.
 * @f: char to define the string
 * Return: f.
*/

char *cap_string(char *f)
{
int i = 0;
int j;
char h[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

if (f[0] >= 97 && f[0] <= 122)
{
f[0] -= 32;
}
for (i = 1; f[i] != '\0'; i++)
{
if (f[i] >= 97 && f[i] <= 122)
{
for (j = 0; h[j] != '\0'; j++)
{
if (f[i - 1] == h[j])
f[i] = f[i] - 32;
}
}
}
return (f);
}
