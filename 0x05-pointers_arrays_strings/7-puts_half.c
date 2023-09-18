#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be tested
 *
 */
void puts_half(char *str)
{
	int l, r, odd;
	int h;

	for (l = 0; str[l] != '\0' ; l++)
		;
	odd = (l - 1) / 2;
	h = l / 2;
	for (r = h - odd; r < l; r++)
	{
		_putchar(str[r]);
	}
	_putchar('\n');
}
