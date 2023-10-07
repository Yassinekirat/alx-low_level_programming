#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 *
 * @b: number of memory to allocate
 *
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	int *memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}

	return (memory);
}
