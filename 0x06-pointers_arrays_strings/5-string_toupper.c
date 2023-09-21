#include "main.h"

/**
 * string_toupper - reverse array
 *
 * @up: string to be tested
 *
 *
 * Return: uppercase
 */
char *string_toupper(char *up)
{
	int l, u;

	for (l = 0; up[l] != '\0'; l++)
	{
		if (up[l] >= 'a' && up[l] <= 'z')
		{
			/*u = 'z' - 'a';*/
			u = 32;
			up[l] = up[l] - u;
		}
	}
	return (up);
}
