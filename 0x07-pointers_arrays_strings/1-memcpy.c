#include "main.h"

/**
 * _memcpy -  function copies nbytes from memory area @src to memory area @dest
 * @dest: the array will copies to
 * @src: the array will copies from
 * @n: number of elements will copy
 * Return: array after edit
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
