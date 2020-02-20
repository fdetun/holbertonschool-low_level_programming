#include "holberton.h"
#include <stdio.h>

/**
 * *leet - leet  a string.
 * @a: char to define the string
 * Return: a.
*/

char *leet(char *a)
{
int i;
int j;
char f[] = "aAeEoOtTlL";
char d[] = "4433007711";

for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; f[j] != '\0'; j++)
{
if (a[i] == f[j])
{
a[i] = d[j];
}
}
}
return (a);
}
