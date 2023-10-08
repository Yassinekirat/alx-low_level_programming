#include "main.h"
#include <stdlib.h>

/**
* _calloc -  function allocates memory for an array
*
* @nmemb: number of bytes
* @size: size
* Return: memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;
	void *memory;

	if (size == 0)
	{
		return (NULL);
	}
	if (nmemb == 0)
	{
		return (NULL);
	}
	memory = malloc(size * nmemb);
	if (memory == NULL)
	{
		return (NULL);
	}
	p = memory;
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (memory);
}
