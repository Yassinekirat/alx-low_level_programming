#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: char to be tested
 *
 * Return:  pointer or Null if insufficient memory
 */
char *_strdup(char *str)
{
	char *a;
	int c, l;

	if (str == NULL)
	{
		return (NULL);
	}
	for (l = 0; str[l] != '\0'; l++)
		;
	a = malloc(1 + (sizeof(*str) * l));
	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (c = 0; c < l; c++)
		{
			a[c] = str[c];
		}
		a[c] = '\0';
	}
	return (a);
}
