#include "main.h"

/**
 * puts2 - prints string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i - 1) != '\0')
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
