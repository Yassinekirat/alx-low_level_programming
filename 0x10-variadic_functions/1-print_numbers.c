#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 *
 * @separator: the separator
 * @n: variable number to be tested.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d",  va_arg(num, int));
	}
	va_end(num);

	putchar('\n');
}
