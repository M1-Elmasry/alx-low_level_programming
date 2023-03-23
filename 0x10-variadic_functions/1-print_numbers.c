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
	int i;
	va_list args;

	va_start(args, n);

	i = n;
	separator = (separator == NULL ? "" : separator);
	while (i > 1)
	{
		printf("%d%s", va_arg(args, int), separator);
		--i;
	}
	printf("%d\n", va_arg(args, int));

	va_end(args);
}
