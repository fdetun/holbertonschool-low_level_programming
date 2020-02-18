#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: char to define the string 
 * Return: the lenth 
*/

void print_rev(char *s)
{
int i=0;
while (s[i] != '\0')
i++;
i = i - 1 ;
while (s[i] > 0)
{
_putchar (s[i]);
i--;
}
_putchar ('\n');
}