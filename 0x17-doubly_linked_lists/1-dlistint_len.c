#include "lists.h"

/**
 * print_dlistint - print_dlistint
 * @h: header of the linked list
 * Return: node numbers n
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t i;

for (i = 0; h; i++)
{
h = h->next;
}
return (i);
}
