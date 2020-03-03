#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - str_concat.
 * @s1: variable
 * @s2: variable
 * Return: 0 or 1
*/

char *str_concat(char *s1, char *s2)
{

char *a;
int j = 0;
int i;
int b = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[j] != '\0')
j++;
j = j + 1;
for (i = 0; s2[i] != '\0'; i++)
b = i + j;
a = malloc(b *sizeof(char));
if (a == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
a [i] = s1 [i];
for (j = 0; j <= b; j++)
a [i + j] = s2 [j];
return (a);
}
