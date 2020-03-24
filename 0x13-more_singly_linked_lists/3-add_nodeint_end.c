#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - add_nodeint_end
 * @head: the memory of the new int
 * @n: int to add
 * Return: h
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *h;
listint_t *tmp;
unsigned int i = 0;

tmp = *head;
h = (listint_t *)malloc(sizeof(listint_t));
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
}
return (h);
}
