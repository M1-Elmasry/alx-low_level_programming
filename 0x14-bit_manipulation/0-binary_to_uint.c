#include <math.h>
#include <string.h>
#include "main.h"


/**
 * power - simple impelementation to pow function in math.h
 * @a: number
 * @b: power
 * Return: @a power @b
 */
int power(int a, int b)
{
	int i, sum;

	sum = 1;
	for (i = 0; i < b; i++)
	{
		sum *= a;
	}
	return (sum);
}


/**
 * binary_to_uint - function to convert binary number to decimal number
 * @b: pointer to string of 0s and 1s
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum = 0, len;

	if (!b)
		return (0);

	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
		{
			sum += power(2, len - i - 1);
		}
		else if (b[i] == '0')
		{
			continue;
		}
		else
		{
			return (0);
		}
	}
	return (sum);
}
