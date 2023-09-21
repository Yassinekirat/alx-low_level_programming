#include "main.h"

/**
 * _strncpy - copies dest and src
 *
 * @dest: string to be tested
 * @src: string to be tested
 * @n: num of bytes
 * Return:  string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		if (l < n)
		{
			dest[l] = src[l];
		}
	}
	for (l = 0; l < n; l++)
	{
		dest[l] = '\0';
	}
	return (dest);
}
