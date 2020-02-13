#include "holberton.h"
#include <stdio.h>
/**
* main - prints the largest prime factor of 612852475143
* Return: 0
*/
int main(void)
{
unsigned long int n;
n = 612852475143;
unsigned long int a = 2, f;

while (n != 0)
{
if (n % a != 0)
a = a + 1;
else
{
f = n;
n = n / a;
if (n == 1)
{
printf("%lu\n", f);
break;
}
}
}
return (0);
}
