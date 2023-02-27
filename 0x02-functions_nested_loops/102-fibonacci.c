#include <stdio.h>

/**
 * main - prints fist 50 number of fibanocci series
 * Return: 0 if code exist else 1
 */
int main(void)
{
	int i;
	unsigned long int first, second, third;

	first = 1;
	second = 2;
	third = 3;

	printf("%ld, %ld", first, second);

	for (i = 0; i < 48; i++)
	{
		printf(", %ld", third);
		first = second;
		second = third;
		third = first + second;
	}
	printf("\n");
	return (0);
}
