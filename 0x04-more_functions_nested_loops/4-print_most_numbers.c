#include "main.h"

/**
 * print_most_numbers - prints numbers without 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i < '9'; i++)
	{
		if((i == '4') || (i == '2'))
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
