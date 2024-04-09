#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in @array.
 * @value: Value to search for.
 *
 * Return: Index of the first occurrence of @value in @array,
 *         or -1 if @value is not found, @array is NULL, or @size is 0.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
