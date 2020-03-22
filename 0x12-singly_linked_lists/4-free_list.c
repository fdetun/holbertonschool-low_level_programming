#include <stdio.h>
#include "lists.h"
/**
 * free_list - free_list
 * @head: the memory of the new string
 * Return: h
 **/

void free_list(list_t *head)
{
list_t *h;
list_t *nexxt;

h = head;
while (h != NULL)
{
nexxt = h->next;
free(h->str);
free(h);
h = nexxt;
}
head = NULL;
}
