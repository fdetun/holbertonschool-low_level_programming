#include<stdio.h>
void fde(void) __attribute__((constructor));

/**
 * fde - a funtcion to print before the main.
 *
 * Return: Always 0.
 */
void fde(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
