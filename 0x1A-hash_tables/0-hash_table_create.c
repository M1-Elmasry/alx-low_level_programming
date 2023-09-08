#include "hash_tables.h"


/**
 * hash_table_create - initialize a hash table
 * @size: size of hash table
 *
 * Return: pointer to allocated hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table)
		return (NULL);


	hash_table->array = malloc(sizeof(hash_node_t *));
	if (!hash_table)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	hash_table->size = size;
	return (hash_table);
}
