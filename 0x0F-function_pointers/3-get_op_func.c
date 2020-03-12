#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - get_op_func func
 * @s: char
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
int arrlen = sizeof(ops) / sizeof(ops[0]);
while (i < arrlen)
{
if (*ops[i].op == *s)
{
return (ops[i].f);
}
i++;
}
return (0);
}
