#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 *
 * @array: Pointer to the array to be searched
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: If the value is found return the index, otherwise return -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (value);
	}
	return (-1);
}
