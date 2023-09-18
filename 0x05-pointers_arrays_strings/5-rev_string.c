#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: string to be tested
 */

void rev_string(char *s)
{
	int l, r;
	char t;

	for (l = 0; s[l] != '\0' ; l++)
		;
	for (r = 0; r < l; r++)
	{
		t = s[r];
		s[r] = s[l];
		s[l] = t;
	}
}
