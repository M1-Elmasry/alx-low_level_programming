#include "main.h"

/**
 * main - prints _putchar
 * Return: 0 if code exist else 1
 */
int main(void)
{
	int i;
	char out[8] = "_putchar";

	for (i = 0; i <= 8; i++)
	{
		_putchar(out[i]);
	}
	return (0);
}
