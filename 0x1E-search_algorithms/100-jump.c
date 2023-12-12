#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * linear_search_range - Searches for a value in a specified range of an array
 * using linear search.
 *
 * @array: Pointer to the array to be searched.
 * @start: Starting index of the range.
 * @end: Ending index of the range.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index; otherwise, return -1.
 */
int linear_search_range(int *array, int start, int end, int value)
{
	int i;

	if (!array)
		return (-1);

	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

/**
 * jump_search - Searches for a value in a sorted array using jump search.
 *
 * @array: Pointer to the array to be searched.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index; otherwise, return -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t steps, i;

	if (!array)
		return (-1);

	steps = sqrt(size);

	for (i = 0; i < size; i += steps)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i - steps, i);
			return (linear_search_range(array, i - steps, i, value));
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (i + steps > size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, i + steps);
			return (linear_search_range(array, i, (i + (size - i - 1)), value));
		}
	}

	return (-1);
}
