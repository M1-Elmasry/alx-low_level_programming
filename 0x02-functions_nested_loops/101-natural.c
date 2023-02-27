#include <stdio.h>

/**
 * main - prints sum of all numbers that maltiples of 3 and 5
 * below 1024
 * Return: 0 if code exist else 1
 */
int main(void)
{
	int i, num;

	num = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			num += i;
		}
	}
	printf("%d\n", num);
	return (0);
}
