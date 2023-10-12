#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: number to be tested
 *
 * Return: the total of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, tot = 0;

	if (!n)
	{
		return (0);
	}

	va_start(num, n);

	for (i = 0; i < n; i++)
		tot = tot + va_arg(num, int);

	va_end(num);
	return (tot);
}
