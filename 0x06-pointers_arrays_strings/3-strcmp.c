#include "holberton.h"
#include <stdio.h>

/**
 * *_strcmp - _strcmp  a string.
 * @s1: char to define the string
 * @s2: char to define the string
 * Return: f.
*/

int _strcmp(char *s1, char *s2)
{
int i = 0;
int f = 0;

while  (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}
f += s1[i] - s2[i];
return (f);
}
