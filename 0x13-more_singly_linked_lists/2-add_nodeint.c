#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - add_nodeint
 * @head: the memory of the new int
 * @n: int to add
 * Return: h
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *h;

h = (listint_t *)malloc(sizeof(listint_t));
if (h == NULL)
return (h);
h->n = n;
h->next = *head;
*head = h;
return (h);
}

