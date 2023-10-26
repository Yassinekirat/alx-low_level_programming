#include "main.h"

/**
 * print_binary -  function that prints the binary representation of a number
 *
 * @n: integer to be tested
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
