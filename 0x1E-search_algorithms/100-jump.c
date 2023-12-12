#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * search - Searches for a value in a specified range of an array
 * using linear search.
 *
 * @array: Pointer to the array to be searched.
 * @start: Starting index of the range.
 * @end: Ending index of the range.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index; otherwise, return -1.
 */
int search(int *array, int start, int end, int value)
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
 * Return: If the value is found, return the index; otherwise, return -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t steps, i;
	char *m1 = "Value found between indexes ";
	char *m2 = "Value checked array";

	if (!array)
		return (-1);

	steps = sqrt(size);

	for (i = 0; i < size; i += steps)
	{
		if (array[i] >= value)
		{
			printf("%s[%lu] and [%lu]\n", m1, i > 0 ? i - steps : 0, i > 0 ? i : steps);
			return (search(array, i > 0 ? i - steps : 0, i > 0 ? i : steps, value));
		}
		printf("%s[%lu] = [%d]\n", m2, i, array[i]);
		if (i + steps > size)
		{
			printf("%s[%lu] and [%lu]\n", m1, i, i + steps);
			return (search(array, i, (i + (size - i - 1)), value));
		}
	}

	return (-1);
}
