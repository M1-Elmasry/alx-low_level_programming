#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: is the key you are looking for
 *
 * Return: value of @key or NULL if not exists
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *curr;

	if (!ht || !ht->array || !key || !strlen(key))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	curr = ht->array[index];

	if (!curr)
		return (NULL);

	if (curr->next)
	{
		while (curr)
		{
			if (strcmp(curr->key, key) == 0)
				return (curr->value);
			curr = curr->next;
		}
		return (NULL);
	}

	return (ht->array[index]->value);
}
