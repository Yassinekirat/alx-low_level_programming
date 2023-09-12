#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers to 98.
 *
 * @n: the number to count from
 *
 */
void print_to_98(int n)
{
	int start;

	if (n < 98)
	{
		for (start = n; start < 98; start++)
		printf("%d, ", start);
	}
	else
	{
		for (start = n; start > 98; start--)
		printf("%d, ", start);
	}
	printf("98\n");
}
