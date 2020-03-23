#include "lists.h"
/**
 * listint_len - listint_len
 * @h: list_t pointer
 * Return: i
 **/

size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
