#include "hash_tables.h"


/**
 * hash_djb2 - hashing a key with djb2 algorithm
 * @str: the key
 *
 * Return: generated hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int i;
	unsigned long int hash = 5381;

	for (i = 0; str[i]; i++)
		hash = ((hash << 5) + hash) + str[i];

	return (hash);
}
