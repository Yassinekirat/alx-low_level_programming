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
	/*Boundary Conditions*/
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}
	/*Check for Null Pointers*/
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
		return (1);
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));


	return (0);
}
