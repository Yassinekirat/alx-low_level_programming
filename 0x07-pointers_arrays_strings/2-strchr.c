#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: string t be tested
 *
 * @c: character to be tested
 *
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int l;

	l = 0;
	while (s[l] >= '\0')
	{
		if (s[l] == c)
		{
			return (&s[l]);
		}
		l++;
	}
	return (0);
}
