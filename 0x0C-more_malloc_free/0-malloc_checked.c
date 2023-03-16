#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of allocated memory
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	
	if (p)
	{
		return (p);
	}
	else
	{
		return ((void *) 98);
	}
}
