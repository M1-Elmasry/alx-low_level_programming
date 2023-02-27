#include <stdio.h>

/**
 * main - prints fist 50 number of fibanocci series
 * Return: 0 if code exist else 1
 */
int main(void)
{
	int i, first, second;
        unsigned long int third;

	first = 1;
	second = 2;
	third = 3;

	printf("%d, %d", first, second);

	for (i = 0; i < 48; i++)
	{
		printf(", %ld", third);
		first = second;
		second = third;
		third = first + second;
	}
	return (0);
}
