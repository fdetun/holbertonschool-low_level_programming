#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - free_listint2
 * @head: the memory of the new string
 * Return: void
 **/

void free_listint2(listint_t **head)
{
listint_t *h;

if (head == NULL)
return;
while (*head != NULL)
{
h = *head;
*head = (*head)->next;
free(h);
}
head = NULL;
}
