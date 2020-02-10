#include "holberton.h"
/**
 * _islower-  _putchar block
 * @c: integer to modify
 * Return: 0 or 1
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
