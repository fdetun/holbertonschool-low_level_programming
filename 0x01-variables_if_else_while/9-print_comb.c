#include <stdio.h>
/**
 * main-  main block
 * Return: 0
 */
int main(void)
{
int f = 48;
int l = 44;
int e = 32;
while (f <= 57)
{
putchar(f);
if (f <= 56)
{
putchar(l);
putchar(e);
}
f++;
}
putchar('\n');
return (0);
}
