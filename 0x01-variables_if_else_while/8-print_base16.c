#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = 'a';

	while (a <= 9)
	{
	putchar(a + '0');
	a++;
	}
	while (b <= 'f')
	{
	putchar(b);
	b++;
	}
	putchar('\n');
	return (0);
}
