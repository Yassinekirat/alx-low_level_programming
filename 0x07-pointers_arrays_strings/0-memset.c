#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: pointer to memory area
 *
 * @b: constant byte
 *
 * @n: number of bytes
 *
 * Return: s pointer to constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int l;

	while (n > 0)
	{
		s[l] = b;
		l++;
		n--;
	}
	return (s);
}
