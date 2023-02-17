#include <stdio.h>

/**
 * main - prints alphabets except q and e
 * Return: 0 if code exist else 1
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z' ; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
