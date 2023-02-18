#include <stdio.h>

/**
 * main - prints alphabets reversed
 * Return: 0 if code exist else 1
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

