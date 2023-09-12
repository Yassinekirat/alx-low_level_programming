#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet ten times
 */

void print_alphabet_x10(void)
{
	int a;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (a = 'a' ; a <= 'z'; a++)
		{
			_putchar(a);
		}
	}
	putchar('\n');
}
