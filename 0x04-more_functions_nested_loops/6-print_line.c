#include "main.h"

/**
 * print_line -  draws a straight line
 *
 * @n: n -  integer to be tested
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
