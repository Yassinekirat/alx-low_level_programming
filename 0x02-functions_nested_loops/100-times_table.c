#include "main.h"
/**
 * print_times_table - prints the times table n times
 *@n: the time table number
 */
void print_times_table(int n)
{
	int n1;
	int n2;
	int result;

	if (n <= 15 && n >= 0)
	{
		for (n1 = 0; n1 < n ; n1++)
		{
			_putchar('0');
			for (n2 = 1; n2 < n; n2++)
			{
				_putchar(',');
				_putchar(' ');

				result = n1 * n2;

				if (result < 10)
				{
					_putchar(' ');
				}
				if (result < 100)
				{
					_putchar(' ');
				}

				else
				{
					_putchar((result / 100) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar ('\n');
		}
	}
}
