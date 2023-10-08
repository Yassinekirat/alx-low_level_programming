#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: string to be tested
 * @s2: string to be tested
 * @n: integer to be tested
 *
 * Return: pointer If the function fails - NULL.
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, j;
	unsigned int l1, l2;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	c = malloc(sizeof(char) * (l1 + n) + 1);

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l1; i++)
	{
		c[i] = s1[i];
	}
	for (j = 0; i < l1 + n; j++)
	{
		c[i] = s2[j];
		i++;
	}

	c[i] = '\0';
	return (c);
}
