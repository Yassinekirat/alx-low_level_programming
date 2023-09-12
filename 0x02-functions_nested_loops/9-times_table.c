#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int n1;
	int n2;
	int result;

	for (n1 = 0; n1 < 10 ; n1++)
	{
		putchar('0');
		for (n2 = 0; n2 < 10; n2++)
		{
			result = n1 * n2;
			if (result < 10 && n2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (n2 == 0)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
			}
		_putchar((result % 10) + '0');
		}
	_putchar ('\n');
	}
}
