#include "main.h"

/**
 * _isupper - check if character @a is in uppercase
 * @a: the character to check
 * Return: 1 if @a is uppercase else 0
 */
int _isupper(int a)
{
	if ((a >= 65) && (a <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
