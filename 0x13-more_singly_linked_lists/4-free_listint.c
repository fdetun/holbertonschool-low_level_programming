#include <stdio.h>
#include "lists.h"
/**
 * free_listint - free_list
 * @head: the memory of the new string
 * Return: void
 **/

void free_listint(listint_t *head)
{
listint_t *h;
listint_t *nexxt;

h = head;
while (h != NULL)
{
nexxt = h->next;
free(h);
h = nexxt;
}
head = NULL;
}
