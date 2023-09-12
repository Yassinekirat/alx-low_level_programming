#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet ten times
 */

void print_alphabet_x10(void);
{
	int a = 'a';
	int i;

	for (i = 0; i <= 9; i++)
	{
		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
	}
putchar('\n');
}
