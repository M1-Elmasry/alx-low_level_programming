#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from @n to @m
 * @n: unsigned long number
 * @m: unsigned long number
 * Return: number of bits will fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int buffer = n ^ m;
	unsigned int  ones = 0;

	while (buffer > 0)
	{
		if ((buffer & 1) == 1)
		{
			++ones;
		}
		buffer >>= 1;
	}
	return (ones);
}
