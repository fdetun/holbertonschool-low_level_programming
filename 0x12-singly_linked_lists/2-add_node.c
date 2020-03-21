#include <stdio.h>
#include "lists.h"
/**
 * add_node - add_node
 * @head: the memory of the new string
 * @str: string to add
 * Return: n
 **/

list_t *add_node(list_t **head, const char *str)
{
list_t *h;
unsigned int i = 0;

h = (list_t *)malloc(sizeof(list_t));
if (h == NULL)
return (h);
while (str[i])
i++;
h->str = strdup(str);
h->len = i;
h->next = *head;
*head = h;
return (h);
}

