#include "variadic_functions.h"

/**
 * print_all -  function that prints anything
 * @format: format to be tested
*/

void print_all(const char * const format, ...)
{
	char *sep = "", *str;
	int i;

	va_list args;

	va_start(args, format);

	if (format)
	{
		for (i = 0; format[i]; i++)
		{
			if (format[i] == 'c')
			{
				printf("%s%c", sep, va_arg(args, int));
			}
			else if (format[i] == 'i')
			{
				printf("%s%d", sep, va_arg(args, int));
			}
			else if (format[i] == 'f')
			{
				printf("%s%f", sep, va_arg(args, double));
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
			}
			else
			{
				continue;
			}
			sep = ", ";
		}
	}

	printf("\n");
	va_end(args);
}
