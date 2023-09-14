#include "main.h"

/**
 * print_number - prints an intege
 *
 * @n: integer to be tested
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int integer;

	integer = n;

	if (n < 0)
	{
		_putchar('-');
		integer = -integer;
	}
	if (integer / 10 != 0)
	{
		print_number(integer / 10);
	}
	_putchar((integer % 10) + '0');
}
