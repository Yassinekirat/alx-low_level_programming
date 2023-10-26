#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function convert a binary number to an unsigned int
 *
 * @b: character to be tested
 *
 *  Return:  the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, pow = 1;
	int len = 0;

	if (!b)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (len--; len >= 0; len--, pow *= 2)
	{
		if (b[len] == '1')
			res += pow;
	}

	return (res);
}
