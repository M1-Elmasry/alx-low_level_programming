#include "main.h"

/**
 * print_diagonal - prints triangle
 * @n: tall of traingle
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (!(n <= 0))
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j == 0)
				{
					continue;
				}
				else
				{
				_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
