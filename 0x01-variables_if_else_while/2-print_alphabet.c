#include <stdio.h>
#include <string.h>

/**
 * main - prints alphabet characters in lowercase
 * Return: 0 if code exist else 1
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
