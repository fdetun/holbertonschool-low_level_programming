#include "lists.h"

/**
 * print_dlistint - print_dlistint
 * @h: header of the linked list
 * Return: node numbers n
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t i;

for (i = 0; h; i++)
{
printf("%u\n", h->n);
h = h->next;
}
return (i);
}
