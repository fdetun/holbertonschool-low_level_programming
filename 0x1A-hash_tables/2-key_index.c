#include "hash_tables.h"

/**
 * key_index - key_index
 * @key: key
 * @size: size
 * Return: hash_djb2
 **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
