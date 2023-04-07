#include "main.h"

/**
 * get_bit - get the bit of spicific index
 * @n: number
 * @index: index
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* n_bits is number of bits in @n */
	unsigned int bit, n_bits = 8 * sizeof(n);

	if (index >= n_bits)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
