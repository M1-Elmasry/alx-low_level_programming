#include "main.h"

/**
 * puts2 - prints string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i, len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		i % 2 == 0 ? _putchar(*(str + i)) : continue;
	}

	_putchar('\n');
}
