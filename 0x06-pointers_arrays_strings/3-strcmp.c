#include "main.h"

/**
 * _strcmp - compares dest and src
 *
 * @s1: string to be tested
 *
 * @s2: string to be tested
 *
 * Return: comparison
 */
int _strcmp(char *s1, char *s2)
{
	int l, cmp;

	for (l = 0; s1[l] && s2[l] != '\0'; l++)
	{
		if (s1[l] != s2[l])
		{
			cmp = s1[l] - s2[l];
			return (cmp);
		}
	}
	return (0);
}
