#include "main.h"

/**
 * print_line - prints '_' @n times
 * @n: number of printing '_'
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (!(n <= 0))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
