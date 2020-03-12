#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
int f, j;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][0] != '+' || argv[2][0] != '-' || argv[2][0] != '*'
	|| argv[2][0] != '/' || argv[2][0] != '%')
{
printf("Error\n");
exit(99);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
{
printf("Error\n");
exit(100);
}
f = atoi(argv[1]);
j = atoi(argv[3]);
printf("%d\n", get_op_func(argv[2])(f, j));
return (0);
}
