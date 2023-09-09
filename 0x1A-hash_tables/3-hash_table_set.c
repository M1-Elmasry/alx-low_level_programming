#include "hash_tables.h"
/**
 * add_node_begin - add allocated node at the beginning of the list
 * @head: of the list
 * @node: allocated node
 * Return: 1
 */
int add_node_begin(hash_node_t **head, hash_node_t *node)
{
	node->next = *head;
	*head = node;
	return (1);
}

/**
 * hash_table_set - insert a new (key, value) to the hash table
 * @ht: the hash table
 * @key: new key that will insert it in the hash table
 * @value: value of @key
 *
 * Return: 1 if success 0 else
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new_item = NULL;

	if (!ht || !ht->array || !ht->size || !key || !value || !strlen(key))
		return (0);

	new_item = malloc(sizeof(hash_node_t));

	if (!new_item)
		return (0);

	new_item->key = strdup(key);
	if (!new_item->key)
		return (0);

	new_item->value = strdup(value);
	if (!new_item->value)
	{
		free(new_item->key);
		return (0);
	}

	new_item->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		add_node_begin(&ht->array[index], new_item);
	else
		ht->array[index] = new_item;

	return (1);
}
