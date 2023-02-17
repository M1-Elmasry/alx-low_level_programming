#include <stdio.h>

/**
 * main - prints alphabets lowercase and uppercase
 * Return: 0 if code exist else 1
 */
int main(void)
{
	int i;
	int j;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}

	for (j = 65; j < 91; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
