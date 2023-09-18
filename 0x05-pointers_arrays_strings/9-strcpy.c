#include "main.h"
/**
 * *_strcpy - copies the string
 *
 * @dest: string to be tested
 * @src: string to be tested
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l;
	int index;

	for (l = 0; src[l] != '\0' ; l++)
		;
	for (index = 0; index < l; index++)
		dest[i] = src[i];
	return (dest);
}
