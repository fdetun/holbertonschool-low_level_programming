#include "lists.h"
/**
 * get_dnodeint_at_index - get_dnodeint_at_index
 * @head: list_t pointer
 * @index: node index
 * Return: i
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

if (head == NULL)
return (NULL);
while (i < index && head != NULL)
{
head = head->next;
i++;
}
return (head);
}
