#include "main.h"

/**
 * reverse_array - reverse the input array
 * @a: pointer to array
 * @n: length of @a
 */
void reverse_array(int *a, int n)
{
	int i;

	if (n % 2 == 0)
	{
		for (i = 0; i < (n / 2); i++)
		{
			int temp;

			temp = *(a + i);
			*(a + i) = *(a + (n - i - 1));
			*(a + (n - i - 1)) = temp;
		}
	}
	else
	{
		for (i = 0; i <= (n / 2) - 1; i++)
		{
			int temp;

			temp = *(a + i);
			*(a + i) = *(a + (n - i - 1));
			*(a + (n - i - 1)) = temp;
		}

	}
}
