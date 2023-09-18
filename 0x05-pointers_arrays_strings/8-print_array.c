#include "main.h"
#include "stdio.h"

/**
 * print_array - prints elements of an array
 *
 * @a: array
 * @n: lenght of a
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index == 0)
		{
			printf("%d", a[index]);
		}
		else
		{
			printf("%d, ", a[index]);
		}
	}
	_putchar('\n');
}
