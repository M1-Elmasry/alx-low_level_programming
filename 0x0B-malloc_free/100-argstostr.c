#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program into string
 * @ac: number of args
 * @av: airgs
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *out = calloc(1, ac * 4 + 25);

	if (ac > 0 && av != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; j < (int) strlen(av[i]); j++)
			{
				*(out + (int) strlen(out)) =  av[i][j];
			}
			*(out + (int) strlen(out)) = '\n';
		}
		return (out);
	}
	return (NULL);
}
