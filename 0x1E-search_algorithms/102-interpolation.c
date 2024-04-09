#include "search_algos.h"

/**
* interpolation_search - Searches for a value in an array of integers
*                        using the interpolation search algorithm.
*
* @array: Array of integers.
* @size: Size of the array.
* @value: Value to search for.
*
* Return: If the value is found, returns the index of the value in the array;
*         otherwise, returns -1.
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, position;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		position = left + (((double)(right - left) /
						(array[right] - array[left])) * (value - array[left]));
		if (position < size)
			printf("Value checked array[%ld] = [%d]\n", position, array[position]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", position);
			break;
		}

		if (array[position] == value)
			return (position);
		if (array[position] > value)
			right = position - 1;
		else
			left = position + 1;
	}

	return (-1);
}
