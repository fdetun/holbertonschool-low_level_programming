#include "hash_tables.h"

/**
 * hash_table_create - Entry point
 * @size: unsigned long int type
 * Return: tb
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *tb;

if (size == 0)
return (NULL);
tb = malloc(sizeof(hash_table_t));
if (!tb)
return (NULL);
tb->size = size;
tb->array = malloc(size * sizeof(hash_table_t));
if (tb->array == NULL)
{
free(tb);
return (NULL);
}
return (tb);
}
