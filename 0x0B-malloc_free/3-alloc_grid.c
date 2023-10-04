#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that concatenates two strings
 * @width: string to be tested
 * @height: string to be tested
 * Return:  pointer or Null on failure
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int c, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < height; c++)
	{
		a[c] = (int *)malloc(sizeof(int) * width);
		if (a[c] == NULL)
		{
			for (b = 0; b < c; b++)
			{
				free(a[c]);
			}
			free(a);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (b = 0; b < width; b++)
		{
			a[c][b] = 0;
		}
	}

	return (a);
}
