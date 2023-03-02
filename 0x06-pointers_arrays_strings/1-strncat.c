#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: number of characters will concatenate from @src
 * and if @n longer than @src will append only not null bytes
 * Return: @dest concatenated with src
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	dest_len = 0;
	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n; i++)
	{
		if (*(src + i) != '\0')
		{
			*(dest + dest_len + i) = *(src + i);
		}
		else
		{
			break;
		}
	}
	return (dest);
}
