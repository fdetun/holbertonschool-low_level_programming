#include <stdio.h>
/**
 * main-  main block
 * Return: 0
 */
int main(void)
{
char f = 'a';
while (f <= 'z')
{
if (f == 'e' || f == 'q')
f++;
putchar(f);
f++;
}
putchar('\n');
return (0);
}
