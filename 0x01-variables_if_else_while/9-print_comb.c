#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
		if (a != 10)
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
