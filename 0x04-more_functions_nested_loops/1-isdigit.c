#include "main.h"

/**
 * _isdigit - checks @c is number or not
 * @c: number will checked
 * Return: 1 if @c is digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
