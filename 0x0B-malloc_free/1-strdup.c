#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - _strdup.
 * @str: variable
 * Return: a Or NULL.
*/
char *_strdup(char *str)
{
char *a;
int j = 0;
int i;

if (str == NULL)
{
return (NULL);
}
while (str[j] != '\0')
{
++j;
a = malloc(j * sizeof(char));
}
if (a == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; ++i)
{
a[i] = str[i];
}
return (a);
}
