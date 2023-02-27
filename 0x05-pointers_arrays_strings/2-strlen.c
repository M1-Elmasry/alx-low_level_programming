#include "main.h"

/**
 * _strlen - return length of string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int i, ch, len;

	i = 0;
	while (true)
	{
		ch = *(s + i);
		if (ch <= 0)
		{
			break;
		}
		i++;
		len++;
	}
	return (len);
}
