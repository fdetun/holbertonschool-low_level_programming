#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - add_node_end
 * @head: the memory of the new string
 * @str: string to add
 * Return: n
 **/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *h;
list_t *tmp;
unsigned int i = 0;

tmp = *head;
h = (list_t *)malloc(sizeof(list_t));
if (h == NULL)
return (NULL);
while (str[i])
i++;
h->str = strdup(str);
h->len = i;
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
