#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all it params
 * @n: number of params
 * Return: sum of all params
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list args;

	va_start(args, n);

	i = n;
	sum = 0;
	while (i > 0)
	{
		sum += va_arg(args, int);
		--i;
	}

	va_end(args);
	return (sum);
}
