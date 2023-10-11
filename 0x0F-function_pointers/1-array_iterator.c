#include "function_pointers.h"
/**
 * array_iterator - hat executes a function given as a parameter
 * @array: array to be tested
 * @size: size
 * @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;


	if (array != NULL || action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
