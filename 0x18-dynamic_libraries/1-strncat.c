#include "main.h"

/**
 * _strncat - concatenates dest and src
 *
 * @dest: string to be tested
 * @src: string to be tested
 * @n: num of bytes
 * Return:  string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, index;

	for (l = 0; dest[l] != '\0'; l++)
		;
	for (index = 0; src[index] != '\0'; index++)
	{
		if (index < n)
		{
			dest[l] = src[index];
			l++;
		}
	}
	dest[l] = '\0';
	return (dest);
}
