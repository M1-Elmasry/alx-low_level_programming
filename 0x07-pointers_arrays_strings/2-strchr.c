#include "main.h"
#include <stddef.h>
/**
 * len - get the length of string
 * @s: string
 * Return: len of @s
 */
int len(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strchr - locate char @c in string @s
 * @s: string
 * @c: character
 * Return: pointer points to @c in @s and if not in @s
 * will return NULL
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p = NULL;

	for (i = 0; i < len(s); i++)
	{
		if (*(s + i) == c)
		{
			p = &(*(s + i));
			break;
		}
	}
	return (p != NULL ? p : NULL);
}
