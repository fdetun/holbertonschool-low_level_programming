#include "lists.h"
/**
 * sum_dlistint - sum_dlistint
 * @head: head pointer
 * Return: i
 **/

int sum_dlistint(dlistint_t *head)
{
int i = 0;
int h = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
h = head->n;
head = head->next;
i = i + h;
}
return (i);
}
