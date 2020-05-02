#include "lists.h"

/**
 * add_dnodeint - add_dnodeint
 * @head: header
 * @n: int
 * Return: h
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *h;

h = (dlistint_t *)malloc(sizeof(dlistint_t));
if (h == NULL)
return (h);
if (*head != NULL)
{
(*head)->prev = h;
}
h->n = n;
h->next = *head;
h->prev = NULL;
*head = h;
return (h);
}
