#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: pointer to memory area
 *
 * @src: constant byte
 *
 * @n: number of bytes
 *
 * Return: s pointer to constant byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	l = 0;

	while (l < n)
	{
		dest[l] = src[l];
		l++;
	}
	return (dest);
}
