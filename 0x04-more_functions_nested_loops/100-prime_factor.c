#include "holberton.h"
#include <stdio.h>
/**
* main - 100 prime factor
* Return: 0
*/
int main(void)
{
long long int n;
n = 612852475143;
long long int a = 2, f;

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
printf("%lli\n", f);
break;
}
}
}
return (0);
}
