#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to given number
 * @index: the index which is set to 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* n_bits is number of bits in @n */
	unsigned int n_bits = 8 * sizeof(n);

	if (index >= n_bits)
		return (-1);

	*n = *n | (unsigned long int) (1 << index);
	*n = *n ^ (unsigned long int) (1 << index);
	return (1);
}

