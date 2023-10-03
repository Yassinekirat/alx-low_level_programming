#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creat an array of chars
 * @size: The size of the array
 * @c: char to be tested
 *
 * Return:  pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(sizeof(char) * size);
	if (a == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
