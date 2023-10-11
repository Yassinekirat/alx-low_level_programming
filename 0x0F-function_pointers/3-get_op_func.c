#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function to perform
 * @s: the name of the function
 * Return: integer
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
	}

	return (NULL);
}
