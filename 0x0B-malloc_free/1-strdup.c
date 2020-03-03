#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - _strdup.
 * @str: variable
 * Return: 0 or 1
*/
char *_strdup(char *str)
{
char *a;
int j;

a = malloc(8 * sizeof(char));
if (str == NULL)
{
return (NULL);
}
for (j = 0; str[j] != '\0'; ++j)
{
a[j] = str[j];
if (sizeof(str) > 8)
{
return (NULL);
}
}
return (a);
free(a);
}
