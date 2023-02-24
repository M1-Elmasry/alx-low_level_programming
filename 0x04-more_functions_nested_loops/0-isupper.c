#include "main.h"

/**
 * _isupper - checks characters is upper or not
 * @c: character
 * Return: 1 if the character isupper else 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
