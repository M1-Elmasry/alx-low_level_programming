#include "main.h"

/**
 * print_triangle - prints triangle with #
 * @size: size of triangle base
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (!(size <= 0))
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size - i - 1; k++)
			{
				_putchar(' ');
			}
			for ( j = 0; j < i + 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
