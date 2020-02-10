#include "holberton.h"
/**
 * main-  main block
 * Return: 0
 */
int main(void)
{
char f;
int i;
char a[] = "Holberton";

for (i = 0; i < 9; i++)
{
f = a[i];
_putchar(f);
}
_putchar('\n');
return (0);
}
