
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - pop_listint
 * @head: pop_listint argument
 * Return: void
 **/

int pop_listint(listint_t **head)
{
listint_t *h;
int f1;
if (head == NULL || *head == NULL)
{
return (0);
}
h = *head;
*head = (*head)->next;
f1 = h->n;
free(h);
return (f1);
}
