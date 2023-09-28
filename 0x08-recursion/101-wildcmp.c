#include "main.h"

/**
 * wildcmp - a function that check if two strings are identical
 *
 * @s1: string to be tested
 *
 * @s2: string to be tested
 *
 * Return: 1 for identical 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s1 == '\0')
	{
		if (*s2 == '\0')
		{
			return (1);
		}
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}
