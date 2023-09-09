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
	hash_table_set(ht, "mentioner", "blabla2");
	printf("setted\n");
	index = key_index((const unsigned char *)"hetairas", ht->size);
	printf("index of hetairas = %d\n", index);
	printf("%s\n", ht->array[index]->value);
	i = hash_table_set(ht, "", "cool");
	if (i == 0)
		return (-1);
	return (EXIT_SUCCESS);
}
