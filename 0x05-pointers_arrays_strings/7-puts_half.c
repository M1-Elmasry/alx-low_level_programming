#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, len;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = 0; i < (len / 2); i++)
		{
			_putchar(*(str + (len / 2) + i));
		}
	}
	else
	{
		for (i = 1; i <= ((len - 1) / 2); i++)
		{
			_putchar(*(str + ((len - 1) / 2) + i));
		}
	}
	_putchar('\n');
}
