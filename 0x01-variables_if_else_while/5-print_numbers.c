#include <stdio.h>

/**
 * main - prints numbers from 0 to 10
 * Return: 0 if code exist else 1
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
