#include <stdio.h>
/**
 * main-  main block
 * Return: 0
 */
int main(void)
{
char f = 'z';
while (f >= 'a')
{
putchar(f);
f = f - 1;
}
putchar('\n');
return (0);
}
