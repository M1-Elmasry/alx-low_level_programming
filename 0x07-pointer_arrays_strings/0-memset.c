#include "main.h"

/**
 * _memset - copy of original memset() function in c
 * @s: array
 * @b: the character that will replace it with n times values in @s array
 * @n: how many times will repace @b in array @s
 * Return: values of array after memset
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
