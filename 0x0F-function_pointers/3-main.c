#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
 * main - function that perform like a simple calculator
 * @argc: The size of argv
 * @argv: An array containing the program command line arguments
 * Return: The result
*/
int main(int argc, char *argv[])
{
	int a, b, res;
	char op;
	int (*operation)(int, int) = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	op = *argv[2];
	b = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		return (99);
	}

	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	res = operation(a, b);

	printf("%d\n", res);

	return (0);

}
