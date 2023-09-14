#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: integer to be tested
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int r, c;

	if (size > 0)
	{
		for (r = 1; r <= size; r++)
		{
			for (c = 1; c <= size; c++)
			{
				if (size - c >= r)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
