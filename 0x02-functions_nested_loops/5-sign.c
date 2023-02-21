#include "main.h"

/**
 * print_sign - check if param n is greater than '0' in ascii code
 * @n: the character will checked
 * Return: 1 if value greater than '0'
 *	   0 if value equal '0'
 *	  -1 if value less than '0'
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if ((n == '0') || (n == 0))
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
