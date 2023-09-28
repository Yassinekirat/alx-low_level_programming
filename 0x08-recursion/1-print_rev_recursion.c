#include "main.h"

/**
 * _print_rev_recursion - a function that printf string in reverse
 *
 * @s: string to be tested
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		return;
	}
}
