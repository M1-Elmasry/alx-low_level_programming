#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print all params (numbers) separated by @separator
 * @separator: separator
 * @n: number of params
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	putchar('\n');
}
