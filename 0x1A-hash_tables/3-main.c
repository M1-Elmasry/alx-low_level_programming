#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	int index, i;
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "hetairas", "blabla");
	printf("index of hetairas is %d\n", key_index("hetairas", ht->size));
	hash_table_set(ht, "mentioner", "blabla2");
	printf("index of mentioner is %d\n", key_index("mentioner", ht->size));
	printf("%s\n", ht->array[278]->next->key);
	return (EXIT_SUCCESS);
}
