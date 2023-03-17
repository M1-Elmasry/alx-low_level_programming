#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes will append from s2 when concatenate
 * Return: pointer which contains s1 and s2 concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	p = malloc(strlen(s1) + strlen(s2));

	if (p)
	{
		strcpy(p, s1);

		if (n < strlen(s2))
		{
			for (i = 0; i < n; i++)
			{
				*(p + strlen(p)) = *(s2 + i);
			}

			*(p + strlen(p)) = '\0';
			return (p);

		}

		for (i = 0; *(s2 + i) != '\0'; i++)
		{
			*(p + strlen(p)) = *(s2 + i);
		}

		*(p + strlen(p)) = '\0';
		return (p);
	}
	return (NULL);
}
