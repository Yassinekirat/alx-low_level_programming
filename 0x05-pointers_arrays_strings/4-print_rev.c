#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to be tested
 *
 */
void print_rev(char *s)
{
		int l, r;

	for (l = 0; s[l] != '\0'; l++)
		;
	for (r = l - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
