#include "main.h"

/**
 * print_square -  prints a square
 *
 * @size: integer to be tested
 *
 * Return:
 */
void print_square(int size)
{
	int r, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1 ; r <= size; r++)
		{
			for (c = 1; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
