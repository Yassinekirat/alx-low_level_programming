#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string to be tested
 *
 * Return: Length
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0' ; s++)
		++l;

	return (l);
}
