#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	unsigned long f1, f2, tot;

	f1 = 0;
	f2 = 1;

	for (c = 0; c <= 49; c++)
	{
		tot = f1 + f2;
		printf("%lu", tot);

		f1 = f2;
		f2 = tot;

		if (c == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
