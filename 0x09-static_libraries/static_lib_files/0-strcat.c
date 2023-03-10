#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: @src concatenated with @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, dest_len;

	i = 0;
	dest_len = 0;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}

	while (1)
	{
		if (*(src + i) != '\0')
		{
			*(dest + dest_len + i) = *(src + i);
		}
		else
		{
			break;
		}
		i++;
	}
	return (dest);
}

