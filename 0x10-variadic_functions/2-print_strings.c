#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints string, followed by a new line.
 * @n: number of strings passed to the function
 * @separator: string to be printed between the strings
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
