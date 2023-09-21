#include "main.h"

/**
 * _strcat - concatenates dest and src
 *
 * @dest: string to be tested
 * @src: string to be tested
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int l;
	int index;

	for (l = 0; dest[l] != '\0'; l++)
		;
	for (index = 0; src[index] != '\0'; index++)
	{
		l++;
		dest[l] = src[index];
	}
	return(dest);
}
