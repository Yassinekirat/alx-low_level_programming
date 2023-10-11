#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: the name we should print
 * @f: the function pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
	{
		f(name);
	}
}
