#include "hash_tables.h"

/**
 * key_index - get index from key
 * @key: the key
 * @size: size of hash_table
 *
 * Return: the index of @key in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
