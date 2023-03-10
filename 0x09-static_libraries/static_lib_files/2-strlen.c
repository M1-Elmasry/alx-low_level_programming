#include "main.h"

/**
 * _strlen - return length of string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int i;
	int ch;
	int len;

	i = 0;
	len = 0;
	while (1)
	{
		ch = *(s + i);
		if (ch <= 0)
		{
			return (len);
		}
		i++;
		len++;
	}
}
