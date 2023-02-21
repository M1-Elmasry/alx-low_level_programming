#include "main.h"

/**
 * _islower - check c is lower or upper
 * Return: 0 if upper 1 if lower
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
