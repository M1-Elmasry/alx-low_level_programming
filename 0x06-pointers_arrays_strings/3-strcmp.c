#include "main.h"

/**
 * _strcmp - compare each string char string man strcmp
 * @s1: first string
 * @s2: second string
 * Return: number and read the fuckin manual if you want to know what is this !
 */
int _strcmp(char *s1, char *s2)
{
	int i, output;
	
	output = 0;
	for (i = 0; (*(s1 + i) != '\0') && (*(s2 + i) != '\0'); i++)
	{
		output += (*(s1 + i)) - (*(s2 + i));
		if (output != 0)
		{
			break;
		}
	}
	return (output);
}
