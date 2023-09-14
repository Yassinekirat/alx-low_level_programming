#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: n - integer to be tested
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int row, vide;

	if (n > 0)
	{
		for (row = 1; row <= n; row++)
		{
			for (vide = 1; vide <= n ; vide++)
			{
				if (row == vide)
				{
					_putchar('\\');
				}
				else if (row > vide)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
