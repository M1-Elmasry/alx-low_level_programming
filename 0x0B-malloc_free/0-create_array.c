#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char
 * Return: pointer to array or NULL if array length is 0
 */
char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *p = malloc(size * sizeof(char));
		int i;

		for (i = 0; i < size; i++)
		{
			*(p + i) = c;
		}
		return (p);
	}
	return (NULL);
}
