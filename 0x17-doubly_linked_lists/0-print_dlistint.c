#include "lists.h"

/**
 * print_dlistint - print_dlistint
 * @h: header
 * Return: node numbers n
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t i;

for (i = 0; h != NULL; i++)
{
printf("%u\n", h->n);
h = h->next;
}
return (i);
}
