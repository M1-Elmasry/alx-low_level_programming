#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - blabla
 * @a: blabla
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("&d", n);
			printf(", &d", i);

		}
		printf('\n');
	}
	else
	{
		for (j = n; j >= 98; j--)
                {
                        printf("&d", n);
                        printf(", &d", j);

                }
                printf('\n');
	}

}
