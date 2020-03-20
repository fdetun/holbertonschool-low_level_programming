#include <stdio.h>
#include "lists.h"
/**
 * print_list - print_list
 * @h: list_t pointer
 * Return: n
 **/

size_t print_list(const list_t *h)
{
size_t n = 0;
while (h != NULL)
{
if (h->str != NULL)
{
printf("[%x] ", h->len);
printf("%s\n", h->str);
}
else
{
printf("[0] (nil)\n");
}
h = h->next;
n++;
}
return (n);
}
