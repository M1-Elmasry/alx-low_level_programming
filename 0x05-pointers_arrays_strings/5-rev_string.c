#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: pointer string
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}

	for (i = 0; i < (len / 2); i++)
	{
		int temp;

		temp = *(s + i);
		*(s + i) = *(s + (len - i - 1));
		*(s + (len - i - 1) = temp;
	}
}

