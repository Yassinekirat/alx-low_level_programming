#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 *
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int l, r;

	for (l = 0; str[l] != '\0' ; l++)
		;
	for (r = 0; r < l; r = r + 2)
	{
		_putchar(str[r]);
	}
	_putchar('\n');
}
