#include "holberton.h"

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
		interger = -integer;
	}
	else if (!(x / 10 == 0))
	{
		print_number(integer / 10);
	}
	_putchar((x % 10) + '0');
}
