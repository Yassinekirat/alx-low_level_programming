#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string to be tested
 * @s2: string to be tested
 * Return:  pointer or Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int l1, l2, c, b;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l1++)
		;

	a = malloc(sizeof(char) * (l1 + l2 + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < l1; c++)
	{
		a[c] = s1[c];
	}
	for (b = 0; b < l2; b++)
	{
		a[b] = s2[b - l1];
	}
	a[l1 + l2] = '\0';
	return (a);
}
