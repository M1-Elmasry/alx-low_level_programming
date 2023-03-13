#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy @str and return pointer to a copy
 * @str: string
 * Return: string
 */
char *_strdup(char *str)
{
	int l = strlen(str);
	char *str2 = malloc(l * sizeof(char));

	if (str2)
	{
		strcpy(str2, str);
		return (str2);
	}
	return (NULL);
}
