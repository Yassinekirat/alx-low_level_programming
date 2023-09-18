#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be tested
 *
 */
void puts_half(char *str)
{
	int l, r;
	int h;

	for (l = 0; str[l] != '\0' ; l++)
		;
	h = l / 2;
	for (r = 0; r < h; r++)
	{
		_putchar(str[r]);
	}
	_putchar('\n');
}
