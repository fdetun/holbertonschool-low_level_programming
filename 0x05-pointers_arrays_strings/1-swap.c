#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swap_int code.
 *@a: integer to check.
 *@b: integer to check.
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
