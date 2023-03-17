#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = malloc(strlen(s1) + strlen(s2));
	unsigned int i;


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
