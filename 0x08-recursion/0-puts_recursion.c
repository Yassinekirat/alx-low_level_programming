#include "main.h"

/**
 * _puts_recursion - a function that a string followed by a '\n'
 *
 * @s: string to be tested
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
