#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - argstostr.
 * @ac: variable
 * @av: variable
 * Return: 0 or 1
*/

char *argstostr(int ac, char **av)
{
char *a;
int i, j, k, l;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
k++;
k++;
}
k++;
a = malloc(k *sizeof(char));
if (a == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
a[l] = av[i][j];
l++;
}
a[l] = '\n';
l++;
}
a[l] = '\0';
return (a);
}
