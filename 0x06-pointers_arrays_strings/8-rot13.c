#include "holberton.h"
#include <stdio.h>

/**
 * *rot13 - rot13  a string.
 * @f: char to define the string
 * Return: f.
*/

char *rot13(char *f)
{
int i, j;

char q[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char w[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; f[i] != '\0'; i++)
{
for (j = 0; q[j] != '\0'; j++)
{
if (f[i] == q[j])
{
f[i] = w[j];
break;
}
}
}
return (f);
}