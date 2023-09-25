#include "main.h"

/**
 * _strpbrk - a function that fills memory with a constant byte
 *
 * @s: string to be tested
 *
 * @accept: character to be tested
 *
 * Return: 0 success
 */
char *_strpbrk(char *s, char *accept)
{
	int l, j;

	for (l = 0; s[l] != '\0'; l++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[l]);
			{
				return (&s[l]);
			}
		}
	}
	return (0);
}
