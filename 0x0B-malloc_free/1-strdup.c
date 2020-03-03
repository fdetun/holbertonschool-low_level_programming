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
int j;

if (str == NULL)
{
return (NULL);
}
a = malloc(8 * sizeof(char));
if (a == NULL)
{
return (NULL);
}
for (j = 0; str[j] != '\0'; ++j)
{
a[j] = str[j];
}
return (a);
free(a);
}
