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
int i, j, k = 0, l = 0;
char *ret;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
for (j = 0; av[i][j]; j++)
l++;
l += ac + 1;
ret = malloc(sizeof(char) * l);
if (!ret)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
ret[k++] = av[i][j];
ret[k++] = '\n';
}
ret[k] = '\0';
return (ret);
}
