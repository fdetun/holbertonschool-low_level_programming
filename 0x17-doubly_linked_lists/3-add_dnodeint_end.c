#include "lists.h"

/**
 * add_dnodeint - add_dnodeint
 * @head: header
 * @n: int
 * Return: h
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *h;
dlistint_t *tmp;

tmp = *head;
h = (dlistint_t *)malloc(sizeof(dlistint_t));
if (h == NULL)
return (NULL);
h->n = n;
if (*head == NULL)
{
*head = h;
return (h);
}
else
{
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = h;
h->prev = tmp;
}
return (h);
}
