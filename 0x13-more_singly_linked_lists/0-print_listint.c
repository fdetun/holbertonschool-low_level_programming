#include "lists.h"
/**
 * print_listint - print_listint
 * @h: list_t pointer
 * Return: i
 **/

size_t print_listint(const listint_t *h)
{
size_t i = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
