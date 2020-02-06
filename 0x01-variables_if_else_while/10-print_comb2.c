#include <stdio.h>
/**
 * main-  main block
 * Return: 0
 */
int main(void)
{
int f = 48;
int b = 47;
int l = 44;
int e = 32;
while (f < 58 && b < 58)
{
b++;
putchar(f);
putchar(b);
if (f == 57 && b == 57)
break;
{
putchar(l);
putchar(e);
}
if (b == 57)
{
f++;
b = 48 ;
}
}
putchar('\n');
return (0);
}


