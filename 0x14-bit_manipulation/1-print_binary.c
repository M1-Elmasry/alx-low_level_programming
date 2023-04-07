#include "main.h"

/**
 * len - convert @b to binary number and return how many bits in it
 * @b: integer number
 * Return: how many bits in @b
 */
int len(unsigned long int b)
{
	unsigned int len;

	len = 0;
	while (b > 0)
	{
		b >>= 1;
		len++;
	}
	return (len);
}

/**
 * print_binary - print binary value of decimal number using bitwise operators
 * @n: decimal number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int i, n_len;

	if (!n)
		_putchar('0');

	n_len = len(n);
	for (i = 0; i < n_len; i++)
	{
		if ((n & (1 << (n_len - 1 - i))) > 0)
		{
			_putchar('1');
			continue;
		}
		else
		{
			_putchar('0');
		}
	}
}
