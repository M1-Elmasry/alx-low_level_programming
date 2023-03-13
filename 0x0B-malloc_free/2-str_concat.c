#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: @s1 and @s2 concatenated
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 && s2)
	{
		int i, l;
		char *s3 = malloc(strlen(s1) + strlen(s2));

		if (s3)
		{
			for (i = 0; i < (int) strlen(s1); i++)
			{
				*(s3 + i) = *(s1 + i);
			}

			l = (int) strlen(s3);

			for (i = 0; i < (int) strlen(s2); i++)
			{
				*(s3 + l + i) = *(s2 + i);
			}
			return (s3);
		}
		return (NULL);
	}
	return (NULL);
}
