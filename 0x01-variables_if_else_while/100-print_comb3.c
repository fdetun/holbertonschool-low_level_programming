#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
int a;
int f;
for (a = 0; a < 10; a++)
{
for (f = a + 1; f < 10; f++)
{
putchar(a + '0');
putchar(f + '0');
if (a == 8 && f == 9)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
