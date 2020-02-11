#include "holberton.h"

/**
 * jack_bauer - jack_bauer
 *
 * Return: 0
 */


void jack_bauer(void)
{
int m;
int h;

for (m = 0; m < 60; m++)
{

for (h = 0; h < 24; h++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}
}
