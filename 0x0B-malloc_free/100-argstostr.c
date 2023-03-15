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
	int i, j, l = 0, a = ac;
	char *out = NULL;

	if (ac > 0 && av != NULL)
	{
		while (a--)
		{
			l += (strlen(av[a]) + 1);

		}
		out = (char *) malloc(l + 1);

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
