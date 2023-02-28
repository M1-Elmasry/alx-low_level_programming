#include "main.h"
#include <stdio.h>

/**
 * print_array - prints every array element
 * @a: pointer array
 * @n: length of array
 */
void print_array(int *a, int n)
{
	int i;

	printf("%d", *a);

	for (i = 1; i < n; i++)
	{
		printf(", %d", *(a + i));
	}
	printf("\n");
}
