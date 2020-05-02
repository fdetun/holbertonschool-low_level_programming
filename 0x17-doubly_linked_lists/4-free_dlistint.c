#include "lists.h"

/**
 * free_dlistint - free_dlistint
 * @head: header
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *nexxt;

while (head != NULL)
{
nexxt = head->next;
free(head);
head = nexxt;
}
head = NULL;
}
