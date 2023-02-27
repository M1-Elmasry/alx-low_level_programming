#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: pointer string
 * Return: void
 */
void print_rev(char *s)
{
	int i, len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	
	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
