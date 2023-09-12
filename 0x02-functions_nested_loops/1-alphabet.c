#include "main.h"
/**
 * print_alphabet - printing alphabet in lowercase
 *
 *
 */
void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
