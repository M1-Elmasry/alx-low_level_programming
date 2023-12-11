#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an array within a given range.
 * @array: Pointer to the array to be printed.
 * @start: Starting index of the range.
 * @end: Ending index of the range.
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[end]);
}

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: Pointer to the array to be searched.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found return the index, otherwise return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (!array)
		return (-1);

	low = 0, high = size - 1;

	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
