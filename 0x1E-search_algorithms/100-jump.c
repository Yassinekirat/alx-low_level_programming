#include "search_algos.h"

/**
* jump_search -	function that searches for a value in
* an array of integers using the jump search algorithm
* @array: array of integers
* @size: size of array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/

#include <math.h>

int jump_search(int *array, size_t size, int value)
{
	int prev_index = 0, jump_step = sqrt(size), array_length = (int)size;

	if (!array || size == 0)
		return (-1);

	while (jump_step < array_length && array[jump_step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", jump_step, array[jump_step]);
		prev_index = jump_step;
		jump_step += sqrt(size);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev_index, jump_step);

	while (prev_index < array_length && prev_index <= jump_step)
	{
		printf("Value checked array[%d] = [%d]\n", prev_index, array[prev_index]);
		if (array[prev_index] == value)
			return (prev_index);
		prev_index++;
	}

	return (-1);
}
