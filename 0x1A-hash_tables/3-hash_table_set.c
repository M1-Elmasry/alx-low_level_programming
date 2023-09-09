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

	if (!key || !value)
		return (0);

	new_item = malloc(sizeof(hash_node_t));

	if (!new_item)
		return (0);

	new_item->key = strdup(key);
	new_item->value = strdup(value);
	new_item->next = NULL;

	if (!new_item->key || !new_item->value)
		return (0);

	index = key_index((const unsigned char *)key, 1024);

	if (!ht->array[index])
		ht->array[index] = new_item;
	else
		add_node_begin(&ht->array[index], new_item);

	return (1);
}
