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
	int index;
	const unsigned char key[] = "hetairas";
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "blabla");
	hash_table_set(ht, "mentioner", "blabla2");
	printf("setted\n");
	index = key_index(key, 1024);
	printf("index of %s = %d\n", key, index);
	printf("%s\n", ht->array[index]->value);
	return (EXIT_SUCCESS);
}
