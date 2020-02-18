#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: char to define the string
 * Return: the lenth
*/

int _strlen(char *s)
{
int i;

while (*s != '\0')
{
i++;
s++;
}
return (i);
}
