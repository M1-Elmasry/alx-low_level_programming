#include "main.h"

/**
 * _isalpha - checks the character is upper or not
 * @c: the character will checked
 * Return: 1 if c is upper else 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
