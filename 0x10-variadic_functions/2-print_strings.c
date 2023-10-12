#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 *
 * @separator: the separator
 * @n: variable number to be tested.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);

		if (p == NULL)
		{
			p = "(nil)";
		}
		if (i != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%s",  p);
	}
	va_end(args);

	putchar('\n');
}
