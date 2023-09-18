#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be tested
 *
 */
void puts_half(char *str)
{
	int l, r, n;
	int h;

	for (l = 0; str[l] != '\0' ; l++)
		;
	h = l / 2;
	if (l % 2 == 0)
		for (r = h; r < l; r++)
		{
			_putchar(str[r]);
		}
	else if (l % 2 != 0)
	{
		for (n = (l - 1) / 2 ; n < l - 1; n++)
			_putchar(str[n + 1]);
	}
	_putchar('\n');
}
