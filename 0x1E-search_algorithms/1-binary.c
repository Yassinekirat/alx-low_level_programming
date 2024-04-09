#include "search_algos.h"

/**
* binary_search - Searches for a value in a sorted array using binary search.
*
* @array: Pointer to the first element of the sorted array to search.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: If the value is not present or the array is NULL, returns -1.
*         Otherwise, returns the index where the value is located.
*
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, i;

	if (array == NULL || size == 0)
		return (-1);

	left = 0;
	right = size - 1;

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			left = i + 1;
		else
			right = i - 1;
	}

	return (-1);
}
