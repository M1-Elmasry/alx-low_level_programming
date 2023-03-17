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
	char *tab;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	while (s1[len1])
		len1++;

	if (s2 == NULL)
		s2 = "";
	while (s2[len2])
		len2++;

	tab = malloc(sizeof(char) * len1 + n + 1);
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		tab[i] = s1[i];

	for (j = 0; s2[j] && j < n; j++)
		tab[i + j] = s2[j];

	tab[i + j] = '\0';

	return (tab);
}

