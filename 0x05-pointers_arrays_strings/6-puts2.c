#include "main.h"

/**
 * puts2 - prints string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i, j;
	
	i = 1;
	while ((*(str + i) != '\0') && (*(str + (i + 1)) != '\0'))
	{
		_putchar((*(str + (i - 1)) != '\0'));
	}
	_putchar('\n');
}
