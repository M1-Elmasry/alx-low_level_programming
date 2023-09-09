#include "hash_tables.h"

/**
 * hash_table_print - retrieves a value associated with a key
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first_print = 0;
	hash_node_t *curr;

	if (!ht)
		return;

	if (!ht->array || !ht->size)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (first_print == 0)
				first_print = 1;
			else
				printf(", ");
			printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);

			if (ht->array[i]->next)
			{
				curr = ht->array[i];
				while (curr)
				{
					if (first_print == 0)
						first_print = 1;
					else
						printf(", ");
					printf("\'%s\': \'%s\'", curr->key, curr->value);

					curr = curr->next;
				}
			}
		}
	}
	printf("}\n");
}
