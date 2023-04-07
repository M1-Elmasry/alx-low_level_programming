#include "main.h"

/**
 * get_bit - get the bit of spicific index
 * @n: number
 * @index: index
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index) & 1;

	return (bit == 1 || bit == 0 ? bit : -1);
}
