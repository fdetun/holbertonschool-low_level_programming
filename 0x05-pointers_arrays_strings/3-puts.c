#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: char to define the string 
 * Return: the lenth 
*/

void _puts(char *str)
{

while (*str != '\0')
{
_putchar (*str);
str++;
}
_putchar ('\n');
}

