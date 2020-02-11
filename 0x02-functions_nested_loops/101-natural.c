#include "holberton.h"
#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int a = 1, b = 0;
while (a < 1024)
{
if ((a % 3) == 0)
{
b += a;
}
else if ((a % 5) == 0)
{
b += a;
}
a++;
}
printf("%d\n", b);
return (0);
}
