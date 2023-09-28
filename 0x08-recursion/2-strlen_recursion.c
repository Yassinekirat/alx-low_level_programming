#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a strin
 *
 * @s: string to be tested
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int l;

	if (*s != '\0')
	{
		l = 1 + _strlen_recursion(s + 1);
		return (l);
	}
	else
	{
		return (0);
	}
}
