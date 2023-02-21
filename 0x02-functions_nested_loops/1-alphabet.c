#include <stdio.h>
#include "main.h"

/**
 * main - prints alphabets character in lowercase
 * Return: 0 if code exist else 1
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a';i >= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
