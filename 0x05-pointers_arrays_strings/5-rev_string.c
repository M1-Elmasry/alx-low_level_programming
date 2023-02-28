#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: pointer string
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		*(s + i) = len - i;
	}
}

