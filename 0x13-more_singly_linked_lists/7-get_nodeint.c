#include "lists.h"
/**
 * get_nodeint_at_index - get_nodeint_at_index
 * @head: list_t pointer
 * @index: node index
 * Return: i
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
